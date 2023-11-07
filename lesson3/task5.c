#include <stdio.h>

int main(void)
{
    int X1, X2, Y1, Y2;
    float k, b;
    
    printf("Введите четыре целых числа координаты X1 X2 Y1 Y2:\n");
    scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
    
    b = (float) (Y1 * X2 - Y2 * X1) / (X2 - X1);
    k = (float) (Y1 - b) / X1;

    printf("Значения 'k' и 'b' равны: %.2f %.2f\n", k, b);

    return 0;
}