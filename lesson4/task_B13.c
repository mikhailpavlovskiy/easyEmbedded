/*
Количество четных и нечетных цифр
Подсчитать количество четных и нечетных цифр числа. 

Данные на входе:		Одно целое неотрицательное число. 
Данные на выходе:	Два числа через пробел. Количество четных и нечетных цифр в числе. 

Пример №1
Данные на входе:	1234 
Данные на выходе:	2 2 

Пример №2
Данные на входе:	787 
Данные на выходе:	1 2 
*/

#include <stdio.h>

int main(void)
{
	int a, num, count = 0, counter = 0;

	printf("Input number:\n");
    scanf("%d", &a);

	while(a != 0)
    {
		num = a % 10;
		a = a / 10;
		if (num % 2 == 0)
			count++;
        else
        counter++;
	}
	printf("Колличество четных чисел: %d\n", count);
    printf("Колличество нечетных чисел: %d\n", counter);
	return 0;
}