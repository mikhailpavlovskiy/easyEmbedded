/*
Сумма от 1 до N
Составить функцию, которая определяет сумму всех чисел от 1 до N и 
привести пример ее использования. 

Пример №1
Данные на входе: 		Одно целое положительное число N 
Данные на выходе: 	Целое число - сумма чисел от 1 до N 

Пример №2
Данные на входе: 	100 
Данные на выходе: 	5050
*/

#include <stdio.h>
 
int summ(int N)
{
    int count = 0;
    for (int i = 1; i <= N; i++)
        count += i;
    return count;
}
 
int main(void)
{
    int a;
    printf("Imput number:\n");
    scanf("%d", &a);
    printf("%d\n", summ(a));
    return 0;
}