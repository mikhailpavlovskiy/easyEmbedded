#include <stdio.h>

int main(void)
{
    int num, num2;
    int difference;
    
    printf("Введите два числа:\n");
    scanf("%d%d", &num, &num2);
    
    difference = num - num2;

    printf("Разность чисел: %d-%d=%d\n", num, num2, difference);
    return 0;
}