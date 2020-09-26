#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale(LC_ALL, "RUS");

    puts("Введите число в промежутке от -5 до -1 ");

    int a;
    scanf_s("%d", &a);

    if (a >= -5 && a <= -1) {
        printf("Число входит в заданый промежуток. Спасибо!\n");
        printf("a = %d", a);
    }
    else {
        printf("Число не входит в заданый промежуток!");
    }

    return 0;
}
