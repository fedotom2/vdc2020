#include <stdio.h>
#include <locale.h>
#include <string.h>
#define MAX_SIZE 256

int main()
{
	setlocale(LC_ALL, "RUS");

	char str1[MAX_SIZE];
	char str2[MAX_SIZE];
	int len;

	printf("Введите строку\n");
	fgets(str1, MAX_SIZE, stdin);
	fflush(stdin);

	len = strlen(str1) / 2;

	for (int i = 0; i < len; i++)
		str2[i] = str1[i];

	str2[len] = '\0';

	printf("\n");
	printf("Первая половина строки\n");
	printf(str2);

	return 0;
}