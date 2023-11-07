#include <stdio.h>

int main(void)
{
    int num, a, b, c, max;
    
    printf("Введите трехзначное число:\n");
    scanf("%d", &num);
    
    a = num % 10;
    b = num / 10 % 10;
    c = num / 100;

    max = a > b ? a : b;
    max = max > c ? max : c;

    printf("Максимальное число: %d\n", max);

    return 0;
}