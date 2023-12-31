/* Сумма квадратов маленьких чисел
Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b. 

Данные на входе:		Два целых числа по модулю не больше 100 
Данные на выходе:	Сумма квадратов от первого введенного числа до второго

Данные на входе:		4 10 
Данные на выходе:	371 */

#include <stdio.h>

int main(void)
{
    int a, b, i, sum;

    sum = 0;

    printf("Введите два целых числа по модулю не больше 100:\n");
    scanf("%d%d", &a, &b);

    if (a > 100 || b > 100)
    {
        printf("Введите два целых числа по модулю не больше 100:\n");
        return 0;
    }

    for (i = a; i <= b; i++)
    {
        sum += i * i;
    }
    printf("%d\n", sum);

    return 0;
}