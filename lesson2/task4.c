#include <stdio.h>

int main(void)
{
    float num, num2, num3;
    float average;
    
    printf("Введите три числа:\n");
    scanf("%f%f%f", &num, &num2, &num3);
    
    average = (num + num2 + num3) / 3;

    printf("Среднее арифметическое чисел: %.2f\n", average);
    return 0;
}
