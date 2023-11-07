#include <stdio.h>

int main(void)
{
    int num, num2, num3;
    
    printf("Введите три целых числа:\n");
    scanf("%d%d%d", &num, &num2, &num3);

    if (num <= (num2 + num3) && num2 <= (num3 + num) && num3 <= (num + num2))
    printf("YES\n");

    else
    printf("NO\n");

    return 0;
}