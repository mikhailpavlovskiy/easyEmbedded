/* 
Все цифры четные
Ввести целое число и определить, верно ли, что все его цифры четные. 
Данные на входе:		Одно целое число 
Данные на выходе:	YES или NO 

Пример №1
Данные на входе:	2684 
Данные на выходе:	YES 

Пример №2
Данные на входе:	2994 
Данные на выходе:	NO 
*/

#include <stdio.h>

int main(void)
{
	int a, num, count = 0, counter = 0;

	printf("Input number:\n");
    scanf("%d", &a);

	while(a != 0)
    {
		num = a % 10;
		a = a / 10;
        counter++;
		if (num % 2 == 0)
			count++;
	}
	(counter == count) ? printf("YES\n") : printf("NO\n");
	return 0;
}