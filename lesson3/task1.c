#include <stdio.h>

int main(void)
{
    int num, num2;
    
    printf("Введите два числа:\n");
    scanf("%d%d", &num, &num2);
    
    if (num < num2)
    printf("%d %d\n", num, num2);

    else
    printf("%d %d\n", num2, num);

    return 0;
}