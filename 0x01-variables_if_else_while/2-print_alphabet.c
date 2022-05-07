#include <stdio.h>

/**
 * main: prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	
	for (int i = 97; i <= 122; ++i)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
