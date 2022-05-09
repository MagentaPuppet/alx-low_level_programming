#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number whose last digit is to be printed
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		l *= -1;
	}

	_putchar(l + 48);

	return (l);
}
