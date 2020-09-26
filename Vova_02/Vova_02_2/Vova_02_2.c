#include <stdio.h>
#define N 10

int main() 
{
	int arr[N] = { 2, 4, 0, 99, 3, 5, 7, -8, 1, 6 };

	int i = 0;
	int max = arr[i];
	do {
		if (arr[i] > max)
			max = arr[i];
		i++;
	} while (i < N);

	printf("Max = %d", max);

	return 0;
}