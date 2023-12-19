/*
Среднее арифметическое чисел
Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива. 

Данные на входе: 	5 целых ненулевых чисел через пробел 
Данные на выходе: 	Одно число в формате "%.3f" 

Пример №1
Данные на входе: 	4 15 3 10 14 
Данные на выходе: 	9.200 

Пример №2
Данные на входе: 	1 2 3 4 5 
Данные на выходе: 	3.000 
*/


#include <stdio.h>
#define SIZE 5

void Input(int *arr, int len);
float Average(int *arr, int len);

int main(void)
{
    int arr[SIZE];
    Input(arr, SIZE);
    Average(arr, SIZE);

    printf("%.3f\n", Average(arr, SIZE));

    return 0;
}

void Input(int *arr, int len)
{
    int i;
    printf("Введите массив:\n");
    for(i = 0; i < len ; i++)
        scanf("%d", &arr[i]);
}

float Average(int *arr, int len)
{
    int i;
    float sum = 0;
    for (i = 0; i < len; i++)
        sum += (float)arr[i];
    
    return sum / len;
}
