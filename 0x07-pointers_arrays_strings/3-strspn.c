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
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to area of memory to be searched
 * @accept: substring to be located
 * Return: Number of bytes in the initial segment of "s"
 * which consists only of bytes from "accept"
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = len(accept);
	unsigned int j, k, count = 0;

	for (j = 0; j < len(s); j++)
	{
		if (i > 0)
		{
			i = len(accept);
			for (k = 0; k < len(accept); k++)
			{
				if (s[j] == accept[k])
				{
					count++;
				}
				else
				{
					i--;
				}
			}
		}
	}
	return (count);
}
