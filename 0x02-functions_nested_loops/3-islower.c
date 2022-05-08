#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase. 0 otherwise
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i != 'z' + 1; ++i)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
