#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table, for n less than 15
 * @n: number whose times table is to be printed
 */

void print_times_table(int n)
{
	int i, j, k, unit, tens, hundreds;

	if (n < 15)
	{
		for (i = 0; i <= n; ++i)
		{
			for (j = 0; j <= n; ++j)
			{	k = i * j;
				unit = (k % 10) + 48;
				tens = ((k / 10) % 10) + 48;
				hundreds = (k / 100) + 48;
				if (k < 10 && j != 0 && j != n)
				{	_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(unit);
					_putchar(',');
				}
				else if (k < 10 && j == n)
				{	_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(unit);
				}
				else if (k >= 10 && k < 100 && j != n)
				{	_putchar(' ');
					_putchar(' ');
					_putchar(tens);
					_putchar(unit);
					_putchar(',');
				}
				else if (k >= 10 && k < 100 && j == n)
				{	_putchar(' ');
					_putchar(' ');
					_putchar(tens);
					_putchar(unit);
				}
				else if (k >= 100 && j != n)
				{	_putchar(' ');
					_putchar(hundreds);
					_putchar(tens);
					_putchar(unit);
					_putchar(',');
				}
				else if (k >= 100 && j == n)
				{	_putchar(' ');
					_putchar(hundreds);
					_putchar(tens);
					_putchar(unit);
				}
				else if (j == 0)
				{	_putchar(unit);
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
