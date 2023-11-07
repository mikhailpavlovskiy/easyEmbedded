#include <stdio.h>

int main(void)
{
    int num, num2, num3, max;
    
    printf("Введите три числа:\n");
    scanf("%d%d%d", &num, &num2, &num3);
    
    max = num > num2 ? num : num2;
    max = max > num3 ? max : num3;

    printf("Наибольшее число: %d\n", max);

    return 0;
}