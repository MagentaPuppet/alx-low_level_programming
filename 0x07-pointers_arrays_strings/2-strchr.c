#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @dest: pointer to area of memory to be filled
 * @src: pointer to area of memory to be copied from
 * @n: number of bytes from the starting byte to be filled
 * Return: Pointer to the first occurence of character "c"
 * in the string "s", NULL otherwise
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;
	char *tmp;

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
	return NULL;
}
