#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase. 0 otherwise
 */

int _isalpha(int c)
{
	int i, j;

	for (i = 'a', j = 'A'; i != 'z' + 1, j != 'Z' + 1; ++i, ++j)
	{
		if (c == i || c == j)
		{
			return (1);
		}
	}
	return (0);
}
