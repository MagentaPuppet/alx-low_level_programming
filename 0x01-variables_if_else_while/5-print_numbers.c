#include <stdio.h>

/**
 * main - prints al single digits of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; ++i)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
