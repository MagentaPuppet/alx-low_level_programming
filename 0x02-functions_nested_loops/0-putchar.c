#include <stdio.h>

/**
 * main - prints "_putchar" followed by a new line
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i[] = "_putchar";
	int j;

	for (j = 0;i[j] != '\0'; ++j)
	{
		putchar(i[j]);
	}

	putchar('\n');

	return (0);
}
