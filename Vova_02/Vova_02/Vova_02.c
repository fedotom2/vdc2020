#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	printf("Введите N: ");
	int n;
	scanf_s("%d", &n);

	double sum = 0;
	for (int i = -10; i <= n; i++)
		if (i != 0)
			sum += (1 / pow(i, 3));

	printf("Sum = %f", sum);

	return 0;
}