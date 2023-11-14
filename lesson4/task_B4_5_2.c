/* Ровно три цифры
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры. 

Данные на входе:		Целое положительное число 
Данные на выходе:	Одно слово: YES или NO 

Пример №1
Данные на входе:		123 
Данные на выходе:	    YES */

#include <stdio.h>

int main(void)
{
    int a, count = 0;

    printf("Input number:\n");
    scanf("%d", &a);

    while (a != 0)
	{
		count++;	
		a = a / 10;
	}
	(count == 3) ? printf("YES\n") : printf("NO\n");
    
    return 0;
}