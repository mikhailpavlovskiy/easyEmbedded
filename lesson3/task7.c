#include <stdio.h>

int main(void)
{
    int num, num2, num3, num4, num5, max;
    
    printf("Введите пять целых чисел:\n");
    scanf("%d%d%d%d%d", &num, &num2, &num3, &num4, &num5);

    max = num > num2 ? num : num2;
    max = max > num3 ? max : num3;
    max = max > num4 ? max : num4;
    max = max > num5 ? max : num5;

    printf("Максимальное число: %d\n", max);

    return 0;
}