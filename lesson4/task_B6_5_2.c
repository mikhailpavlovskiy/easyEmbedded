/* Две одинаковые цифры рядом
Ввести целое число и определить, верно ли, 
что в его записи есть две одинаковые цифры, стоящие рядом. 

Данные на входе:		Одно целое число 
Данные на выходе:	Единственное слов: YES или NO 

Пример №1
Данные на входе:	1232 
Данные на выходе:	NO */

#include <stdio.h>

int main(void)
{
	int a, c, b = -5;

	printf("Input number: \n");
	scanf("%d", &a);

	while (a != 0) 
	{
		c = a % 10; 
		a /= 10;  

		if (b == c)
		{
			printf("YES\n");
			break;
		}
		else
			b = c;

		if (a == 0)
		{
			printf("NO\n");
		}
		

	}

	return 0;
}

