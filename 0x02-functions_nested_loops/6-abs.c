#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of a number
 * @n: Number whose absolute value is to be computed
 *
 * Return: The absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		n *= +1;
	}

	else
	{
		n *= -1;
	}

	return (n);
}
