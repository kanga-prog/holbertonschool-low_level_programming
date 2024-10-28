#include <stdio.h>
#include "main.h"
/**
* times_table - prints the 9 times table
*
* Return: 0 if succes
*/
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			l = k / 10;
			m = k % 10;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (k <= 9)
			{
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
				_putchar(l + '0');
				_putchar(m + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
