#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
#include <time.h>

#define N 2  //���������� �������

typedef struct
{
	char name[7];
	int gerz;
	int ram;
	char dvdrom[7];
	int cost;
}computers;

int main()
{
	//������������� ������� ���������
	system("chcp 1251");
	system("cls");

	//�����������
	setlocale(LC_ALL, "RUS");

	//������ ������ �������
	computers database[N];

	//��������� ���� ������
	for (int i = 0; i < N; i++)
	{

		printf("������� �������� %d-�� ���������� : ", i + 1);
		gets(database[i].name);
		rewind(stdin);
		printf("������� ������� %d-�� ����������(� �����) : ", i + 1);
		scanf_s("%d", &database[i].gerz);
		rewind(stdin);
		printf("������� ����� ����������� ������ %d-�� ����������(� ��) : ", i + 1);
		scanf_s("%d", &database[i].ram);
		rewind(stdin);
		printf("������� ���������� � ������� DVD-ROM � %d-�� ���������� : ", i + 1);
		gets(database[i].dvdrom);
		rewind(stdin);
		printf("������� ��������� %d-�� ����������(� ������) : ", i + 1);
		scanf_s("%d", &database[i].cost);
		printf("\n");
		rewind(stdin);

	}

	//������� �����
	printf("��������\t�������\t����� ����������� ������\t������� DVD-ROM\t���������\n");
	rewind(stdin);
	//��������� ������ � ������� ���� ������ 10 �� �����������
	for (int i = 0; i < N; i++) {
		if (database[i].ram > 10) {
			printf("%s         %d ���        %d ��         %s       %d ������\n ",
				database[i].name, database[i].gerz, database[i].ram, database[i].dvdrom, database[i].cost);
			rewind(stdin);
		}
	}
	return 0;
}