#include <stdio.h>

int main(void)
{
    int num, num2, num3, num4, num5, max, min, summ;
    
    printf("Введите пять целых чисел:\n");
    scanf("%d%d%d%d%d", &num, &num2, &num3, &num4, &num5);

    max = num > num2 ? num : num2;
    max = max > num3 ? max : num3;
    max = max > num4 ? max : num4;
    max = max > num5 ? max : num5;

    min = num < num2 ? num : num2;
    min = min < num3 ? min : num3;
    min = min < num4 ? min : num4;
    min = min < num5 ? min : num5;

    summ = min + max;

    printf("Сумма минимального и максимального числа: %d\n", summ);

    return 0;
}