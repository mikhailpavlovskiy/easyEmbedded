/*
Факториал
Составить функцию вычисления N!. Использовать ее при вычислении факториала
int factorial(int n)

Данные на входе: 	Целое положительное число не больше 20 
Данные на выходе: 	Целое положительное число 

Пример №1
Данные на входе: 	5 
Данные на выходе: 	120
*/

#include <stdio.h>

int factorial(int);

int main()
{
    int num;
    printf("Imput number < 20:\n");
    scanf("%d", &num);
    printf("%u\n", factorial(num));
    return 0;
}

int factorial(int n)

{
    int i, fact = 1;
    for(i = 2; i <= n; i++)
        fact *= i;
    return fact;
}