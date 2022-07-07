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
 * _strstr - finds the first occurrence of the
 * substring @needle in the string @haystack
 *
 * @haystack: pointer to area of memory to be searched
 * @needle: substring to be located
 * Return: Pointer to the byte in @s that matches one of
 * the bytes in @accept, or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j = 0;

	for (i = 0; i < len(needle); ++i)
	{
		for (j = 0; j < len(haystack); j++)
		{
			if (*(needle + i) == *(haystack + j))
			{
				return (haystack + j);
			}
		}
	}
	return (NULL);
}
