#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int fib_sum, i, temp, total;

	fib_sum = 1;
	total = 0;

	for (i = 2; i <= 4000000;)
	{
		temp = i;
		if (i % 2 == 0)
		{
			total += i;
		}
		i += fib_sum;
		fib_sum = temp;
	}
	printf("%ld\n", total);

	return (0);
}
