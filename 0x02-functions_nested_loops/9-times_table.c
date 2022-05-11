#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, k, unit, tens, comma, space;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			k = i * j;
			unit = (k % 10) + 48;
			tens = ((k - (k % 10)) / 10) + 48;
			if (k < 10 && j != 0 && j != 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(unit);
				_putchar(',');
			}
			else if (j == 9 && k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(unit);
			}
			else if (k >= 10 && j != 9)
			{
				_putchar(' ');
				_putchar(tens);
				_putchar(unit);
				_putchar(',');
			}
			else if (j == 9 && k >= 10)
			{
				_putchar(' ');
				_putchar(tens);
				_putchar(unit);
			}
			else if (j == 0)
			{
				_putchar(unit);
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
