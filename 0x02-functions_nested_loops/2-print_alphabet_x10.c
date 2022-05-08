#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 * 10 times in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; ++i)
	{
		for (j = 'a'; j != 'z' + 1; ++j)
		{
			putchar(j);
		}

		putchar('\n');
	}
}
