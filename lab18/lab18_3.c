#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
#include <time.h>

#define N 2  //Количество записей

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
	//Устанавливаем русскую раскладку
	system("chcp 1251");
	system("cls");

	//Локализация
	setlocale(LC_ALL, "RUS");

	//Создаём массив записей
	computers database[N];

	//Заполняем базу данных
	for (int i = 0; i < N; i++)
	{

		printf("Введите название %d-го компьютера : ", i + 1);
		gets(database[i].name);
		rewind(stdin);
		printf("Введите частоту %d-го компьютера(в ГГцах) : ", i + 1);
		scanf_s("%d", &database[i].gerz);
		rewind(stdin);
		printf("Введите обьём оперативной памяти %d-го компьютера(в ГБ) : ", i + 1);
		scanf_s("%d", &database[i].ram);
		rewind(stdin);
		printf("Введите информацию о наличии DVD-ROM у %d-го компьютера : ", i + 1);
		gets(database[i].dvdrom);
		rewind(stdin);
		printf("Введите стоимость %d-го компьютера(в рублях) : ", i + 1);
		scanf_s("%d", &database[i].cost);
		printf("\n");
		rewind(stdin);

	}

	//Выводим шапку
	printf("Название\tЧастота\tОбъём оперативной памяти\tНаличие DVD-ROM\tСтоимость\n");
	rewind(stdin);
	//Проверяем каждый и выводим если больше 10 ГБ оперативной
	for (int i = 0; i < N; i++) {
		if (database[i].ram > 10) {
			printf("%s         %d ГГЦ        %d ГБ         %s       %d рублей\n ",
				database[i].name, database[i].gerz, database[i].ram, database[i].dvdrom, database[i].cost);
			rewind(stdin);
		}
	}
	return 0;
}