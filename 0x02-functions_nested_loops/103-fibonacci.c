#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int sum, i, temp, count;

	sum = 1;
	printf("%ld, ", sum);
	count = 1;

	for (i = 2; i <= 4000000;)
	{
		temp = i;
		if (i % 2 == 0)
		{
			printf("%ld", i);
			if (i + sum > 4000000)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
		}
		i += sum;
		sum = temp;
		count++;
	}
	if (i % 2 == 0)
	{
		printf("%ld\n", i);
	}

	return (0);
}
