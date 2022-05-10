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
			tens = ((k - (k % 10))/10) + 48;
			comma = ',';
			space = ' ';


			if (k >= 10)
			{
				if (j == 9)
				{
					comma = '\0';
				}
			}
			else
			{
				tens = ' ';
				if (j == 9)
				{
					comma = '\0';
				}

				if (j == 0)
				{
					space = '\0';
					tens = '\0';
				}
			}

			_putchar(space);
			_putchar(tens);
			_putchar(unit);
			_putchar(comma);
		}
		_putchar('\n');
	}
}
