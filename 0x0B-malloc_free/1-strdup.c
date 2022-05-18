#include "main.h"

/**
 * _strdup - returns a pointer to a newly
 *
 */

char *_strdup(char *str)
{
	int i, length = 0;
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

		strcpy = malloc(length * sizeof(char));

		if (strcpy == NULL)
		{
			return (NULL);
		}
		else
		{
			i = 0;
			while (i < length)
			{
				*(strcpy + i) = *(str + i);
				++i;
			}

			return strcpy;
		}
	}
}
