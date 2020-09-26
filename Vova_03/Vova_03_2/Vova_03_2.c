﻿/*

Написати програму вводу в
масив розміром NxN дійсних
чисел і обчислення суми
квадратів непарних елементів
отриманого масиву. Розміри і
елементи матриці ввести з
клавіатури

P.S. условие задания с ошибкой. Чётность и нечётность числа, 
это характеристика целого числа, а никак не вещественого.
В задании сказано, что нужно ввести массив вещественных чисел, 
а потом в нём найти нечётные числа, что не являеться возможным.
Поэтому, либо нужно проигнорировать условие задания, и сделать
массив целых чисел, либо в проверке на чётность, приводить число
в целое, что нельзя назвать корректной работой программы.
В программе реализован первый вариант (с игнорированием условия).

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define MAX_SIZE 100

int main()
{
	setlocale(LC_ALL, "RUS");

	int arr[MAX_SIZE][MAX_SIZE];
	int n;
	int sum = 0;

	printf("Введите N - количество элементов в двумерном массиве NxN\n");
	scanf_s("%d", &n);

	printf("Введите массив\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("arr[%d][%d] = ", i, j);
			scanf_s("%d", &arr[i][j]);
		}

		printf("\n");
	}

	printf("\n");
	printf("Текущий массив\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("Нечётные элементы\n");

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] % 2 != 0) {
				sum += pow(arr[i][j], 2);
				printf("%d ", arr[i][j]);
			}
		}
	}

	printf("\n");
	printf("Сумма квадратов нечётных элементов = %d", sum);

	return 0;
}