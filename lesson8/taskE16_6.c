/*
Чаще других
Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего. 
Гарантируется, что такое число ровно 1. 

Данные на входе: 	10 целых числе через пробел 
Данные на выходе: 	Одно число, которое встречается чаще других. 

Пример
Данные на входе: 	4 1 2 1 11 2 34 11 0 11 
Данные на выходе: 	11
*/

#include <stdio.h>
#define SIZE 10

void Input(int* arr, int len);
int MAX(int* array, int len);

int main(void)
{
    int array[SIZE];
    Input(array, SIZE);
    int num = MAX(array, SIZE);

    printf("Чаще всего встречается цифра: %d\n", num);

    return 0;
}

void Input(int* arr, int len)
{
    printf("Введите массив:\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int MAX(int* array, int len)
{
    int count = 0, max = 0, top = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (array[i] == array[j])
                count++;
        }
        if (count > max)
        {
            max = count;
            top = i;
        } 
    }

    return array[top];
}


