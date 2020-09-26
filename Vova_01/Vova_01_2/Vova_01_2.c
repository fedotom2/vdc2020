#include <stdio.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "RUS");

	printf("Введите номер месяца, чтобы узнать название следующего месяца\n");

	int a;

	scanf_s("%d", &a);

	a++;

	if (a > 12) a = 1;

	switch (a)
	{
		case 1:
			printf("Январь");
			break;
		case 2:
			printf("Февраль");
			break;
		case 3:
			printf("Март");
			break;
		case 4:
			printf("Апрель");
			break;
		case 5:
			printf("Май");
			break;
		case 6:
			printf("Июнь");
			break;
		case 7:
			printf("Июль");
			break;
		case 8:
			printf("Август");
			break;
		case 9:
			printf("Сентябрь");
			break;
		case 10:
			printf("Октябрь");
			break;
		case 11:
			printf("Ноябрь");
			break;
		case 12:
			printf("Декабрь");
			break;
		default:
			printf("Такой номер месяца не существует!");
			break;
	}

	/* 
	switch (a)
	{
		case 1:
			printf("Февраль");
			break;
		case 2:
			printf("Март");
			break;
		case 3:
			printf("Апрель");
			break;
		case 4:
			printf("Май");
			break;
		case 5:
			printf("Июнь");
			break;
		case 6:
			printf("Июль");
			break;
		case 7:
			printf("Август");
			break;
		case 8:
			printf("Сентябрь");
			break;
		case 9:
			printf("Октябрь");
			break;
		case 10:
			printf("Ноябрь");
			break;
		case 11:
			printf("Декабрь");
			break;
		case 12:
			printf("Январь");
			break;
		default:
			printf("Такой номер месяца не существует!");
			break;
	}
	*/

	return 0;
}