/*
Вторая с конца ноль 
Считать массив из 10 элементов и отобрать в другой массив все числа, 
у которых вторая с конца цифра (число десятков) – ноль. 

Данные на входе: 	10 целых чисел через пробел. 
Данные на выходе: 	Целые числа через пробел, у которых вторая с конца цифра - ноль 

Пример
Данные на входе: 	40 105 203 1 14 1000 22 33 44 55 
Данные на выходе: 	105 203 1 1000 
*/

#include <stdio.h>
#define SIZE 10

void Average(int* arr, int len);
void Input(int* arr, int len);

int main(void)
{
    int arr[SIZE];
    Input(arr, SIZE);
    Average(arr, SIZE);
            
    return 0;
}

void Input(int* arr, int len)
{
    printf("Введите массив:\n");
    for(int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void Average(int* arr, int len)
{
    int n = 0, array2[SIZE];
    for (int i = 0; i < len; i++)
    {
        if ((arr[i] / 10 % 10) == 0)
        {
            array2[n] = arr[i];
            n++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array2[i]);
    }
}
