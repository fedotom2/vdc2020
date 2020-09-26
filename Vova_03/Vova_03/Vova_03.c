#include <stdio.h>
#include <locale.h>
#define MAX_SIZE 100

int main()
{
	setlocale(LC_ALL, "RUS");

	int arr[MAX_SIZE];
	int n;
	int mul = 1;
	printf("Введите N - количество элементов в массиве\n");
	
	scanf_s("%d", &n);

	printf("Введите массив\n");
	for (int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}

	printf("\n");
	printf("Текущий массив\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	printf("Чётные отрицательные элементы массива\n");
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0 && arr[i] % 2 == 0) {
			mul *= arr[i];
			printf("%d ", arr[i]);
		}
	}

	printf("\n");
	printf("Их произведение = %d", mul);

	return 0;
}