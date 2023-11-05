#include <stdio.h>

int main(void)
{
    int num;
    int product;
    
    printf("Введите трехзначное число:\n");
    scanf("%d", &num);
    
    product = num % 10;
    product *= (num / 10) % 10;
    product *= num / 100;

    printf("Произведение чисел: %d\n", product);
    return 0;
}