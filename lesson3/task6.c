#include <stdio.h>

int main(void)
{
    int num, num2;
    
    printf("Введите два целых числа:\n");
    scanf("%d%d", &num, &num2);
    
    if (num < num2)
    printf("Less\n");
    
    if (num > num2)
    printf("Above\n");
    
    if (num == num2)
    printf("Equal\n");

    return 0;
}