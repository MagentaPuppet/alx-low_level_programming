#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a char.
 * @size: number of chars worth of memory to be allocated
 * @c: character to be initialized into the array
 *
 * Return: char*
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar = malloc(size * sizeof(*ar));
		for (i = 0; i < size; ++i)
		{
			ar[i] = c;
		}
		return (ar);
	}
}
