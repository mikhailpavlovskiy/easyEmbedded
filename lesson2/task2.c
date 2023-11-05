#include <stdio.h>

int main(void)
{
    // insert code here...
    int num, num2, num3;
    int sum;
    int product;
    
    printf("Введите три числа:\n");
    scanf("%d%d%d", &num, &num2, &num3);
    
    sum = num + num2 + num3;
    product = num * num2 * num3;

    printf("Сумма чисел: %d+%d+%d=%d\n", num, num2, num3, sum);
    printf("Произведение чисел: %d*%d*%d=%d\n", num, num2, num3, product);
    return 0;
}