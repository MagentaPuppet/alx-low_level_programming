#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to area of memory to be searched
 * @c: character to be located
 * Return: Pointer to the first occurence of character "c"
 * in the string "s", NULL otherwise
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;

	while (*(s + i) != '\0')
	{
		++i;
		++len;
	}

	for (j = 0; j <= len; j++)
	{
		if (*(s + j) == c)
		{
			return (s + j);
		}
	}
	return (NULL);
}
