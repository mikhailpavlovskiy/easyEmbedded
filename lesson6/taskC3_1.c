/*
Среднее арифметическое чисел
Написать функцию,
которая возвращает среднее арифметическое двух переданных ей аргументов (параметров).
int middle(int a, int b)
Данные на входе: 	Два целых не отрицательных числа 
Данные на выходе: 	Одно целое число 

Пример №1
Данные на входе: 	5 7 
Данные на выходе: 	6 

Пример №2
Данные на входе: 	10 20 
Данные на выходе: 	15 
*/

#include <stdio.h>
 
int middle(int, int);
 
int main(void)
{
    int a, b;
    printf("Imput two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("%d\n", middle(a, b));
    return 0;
}

int middle(int a, int b)

{
    int res = (a + b) / 2;
    return res;
}