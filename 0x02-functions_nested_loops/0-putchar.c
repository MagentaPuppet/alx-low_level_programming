#include <stdio.h>

/**
 * _putchar - prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */

int _putchar(void)
{
	char i[] = "_putchar";
	int j;

	for (j = 0; i[j] != '\0'; ++j)
	{
		putchar(i[j]);
	}

	putchar('\n');

	return (0);
}
