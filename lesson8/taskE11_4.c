/*
Отсортировать по последней цифре
Считать массив из 10 элементов и отсортировать его по последней цифре. 

Данные на входе: 		10 целых чисел через пробел 
Этот же массив отсортированный по последней цифре 

Пример №1
Данные на входе: 	14 25 13 30 76 58 32 11 41 97 
Данные на выходе: 	30 11 41 32 13 14 25 76 97 58 

Пример №2
Данные на входе: 	109 118 100 51 62 73 1007 16 4 555 
Данные на выходе: 	100 51 62 73 4 555 16 1007 118 109
*/

#include <stdio.h>

int main(void)
{
    int array[10];
    printf("Введите массив:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    int size = sizeof(array) / sizeof(array[0]);
    int pos;

    for(int i = 0; i < size - 1; ++i)
    {
        pos = i;
        for(int j = i + 1; j < size; ++j)
        {
            if(array[pos] % 10 > array[j] % 10)
                pos = j;
        }
        if(pos != i)
        {
            int t = array[i];
            array[i] = array[pos];
            array[pos] = t;       
        }
    }
    for(int i = 0; i < size; ++i)
        printf("%d ", array[i]);
        
    return 0;
}
