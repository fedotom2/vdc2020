#include <stdio.h>
#include <locale.h>
#include <string.h>
#define MAX_SIZE 256

int main()
{
	setlocale(LC_ALL, "RUS");

	char str1[MAX_SIZE];
	int len;

	printf("Введите строку\n");
	fgets(str1, MAX_SIZE, stdin);
	fflush(stdin);

	len = strlen(str1);

	int j = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (str1[i] == ' ') {
			j = i;
			break;
		}
	}

	printf("\n");
	printf("Последние слово в предложении\n");
	printf(&str1[j+1]);

	return 0;
}