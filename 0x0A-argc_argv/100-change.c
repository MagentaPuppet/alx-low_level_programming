#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for an amount
 * @argc: Number of elements in argv
 * @argv: Array of strings passed as arguments
 *
 * Return: 0 if number of arguments is greater than or equal to 2. 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, sum = atoi(argv[argc - 1]);
	int count = 0;

	if (argc == 2)
	{
		if (sum >= 0)
		{
			for (i = 0; i <= 4; ++i)
			{
				while (sum >= coins[i])
				{
					count++;
					sum -= *(coins + i);
				}
			}
		}
		else
		{
			count = 0;
		}
		printf("%d\n", count);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
