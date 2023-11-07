#include <stdio.h>

int main(void)
{
    int num, num2, num3, num4, num5, min;
    
    printf("Введите пять целых чисел:\n");
    scanf("%d%d%d%d%d", &num, &num2, &num3, &num4, &num5);

    min = num < num2 ? num : num2;
    min = min < num3 ? min : num3;
    min = min < num4 ? min : num4;
    min = min < num5 ? min : num5;

    printf("Минимальное число: %d\n", min);

    return 0;
}