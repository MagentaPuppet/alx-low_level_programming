#include "main.h"

/**
 * len - gets the length of a string
 *
 * @s: pointer to area of memory to be searched
 * Return: Length of string
 */

unsigned int len(char *s)
{
	unsigned int i = 0;
	unsigned int length = 0;

	while (*(s + i) != '\0')
	{
		++i;
		++length;
	}
	return (length);
}

/**
 * _strpbrk - locates the first occurrence in the string @s
 * of any of the bytes in the string @accept
 *
 * @s: pointer to area of memory to be searched
 * @accept: substring to be located
 * Return: Pointer to the byte in @s that matches one of
 * the bytes in @accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i < len(s); ++i)
	{
		for (j = 0; j < len(accept); ++j)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
