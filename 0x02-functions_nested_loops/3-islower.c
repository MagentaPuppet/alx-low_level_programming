#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * Return: Always 0 (Success)
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
