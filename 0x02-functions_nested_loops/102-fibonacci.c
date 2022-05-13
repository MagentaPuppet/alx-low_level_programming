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

	for (i = 2; count < 50;)
	{
		temp = i;
		printf("%ld, ", i);
		i += sum;
		sum = temp;
		count++;
	}
	printf("%ld\n", i);

	return (0);
}
