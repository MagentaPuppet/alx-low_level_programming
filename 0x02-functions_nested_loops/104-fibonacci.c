#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	__int128 sum, i, temp, count;

	sum = 1;
	printf("%s, ", sum);
	count = 1;

	for (i = 2; count < (98 - 1);)
	{
		temp = i;
		printf("%s, ", i);
		i += sum;
		sum = temp;
		count++;
	}
	printf("%s\n", i);

	return (0);
}
