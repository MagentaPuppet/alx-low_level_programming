#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size:
 * @c:
 *
 * @return char*
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar = malloc(size * sizeof(*ar));
		ar[0] = c;
		return (ar);
	}
}
