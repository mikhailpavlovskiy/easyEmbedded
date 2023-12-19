/*
Циклический сдвиг массива вправо на 4
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента. 

Данные на входе: 	12 целых чисел через пробел 
Данные на выходе: 	12 целых чисел через пробел 

Пример №1
Данные на входе: 	4 -5 3 10 -4 -6 8 -10 1 0 5 7 
Данные на выходе: 	1 0 5 7 4 -5 3 10 -4 -6 8 -10 

Пример №2
Данные на входе: 	1 2 3 4 5 6 7 8 9 10 11 12 
Данные на выходе: 	9 10 11 12 1 2 3 4 5 6 7 8 
*/

#include <stdio.h>

void reverseArray(int *array, int num)
{
    for (int i = 0, j = num - 1; i < j; i++, j--)
    {
        int t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}

int main(void)
{
    int array[12];
    printf("Введите массив \n");
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &array[i]);
    }
    reverseArray(array, 8);
    reverseArray(&array[8], 4);
    reverseArray(array, 12);

    printf ("Сдвиг массива: \n");
    for (int i = 0; i < 12; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

