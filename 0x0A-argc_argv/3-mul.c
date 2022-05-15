#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints its own name
 * @argc: Number of elements in argv
 * @argv: Array of strings passed as arguments
 *
 * Return: 0 if number of arguments is greater than or equal to 2. 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc - 1 >= 2)
	{
		for (i = 1; i < argc; ++i)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
