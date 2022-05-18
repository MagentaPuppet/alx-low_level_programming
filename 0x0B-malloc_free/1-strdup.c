#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 *
 * Return: pointer to copy of str
 */

char *_strdup(char *str)
{
	int i, j, length = 0;
	char *strcpy;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			length++;
		}

		strcpy = malloc((length + 1) * sizeof(char));
		/*length + 1 to accomodate for the '\0' char*/

		if (strcpy == NULL)
		{
			return (NULL);
		}
		else
		{
			j = 0;
			while (j < length)
			{
				*(strcpy + j) = *(str + j);
				++j;
			}

			return (strcpy);
		}
	}
}
