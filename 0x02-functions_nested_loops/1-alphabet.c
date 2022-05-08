#include <stdio.h>
#include "main.h"

/**
 * main - prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i != 'z' + 1; ++i)
	{
		putchar(i);
	}

	putchar('\n');
}
