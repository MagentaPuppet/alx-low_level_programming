#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers
 * @argc: Number of elements in argv
 * @argv: Array of strings passed as arguments
 *
 * Return: 0 if number of arguments is greater than or equal to 2. 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	unsigned int j;

	if (argc >= 2)
	{
		for (i = 1; i < argc; ++i)
		{
			for (j = 0; j < strlen(*(argv + i)); ++j)
			{
				if (!(isdigit(*(*(argv + i) + j)) == 0))
				{
					if (j == strlen(*(argv + i)) - 1)
					{
						sum += atoi(*(argv + i));
					}
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
