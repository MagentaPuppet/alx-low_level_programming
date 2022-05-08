#include <stdio.h>

/**
 * main - prints different combinations of two sets of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int num1;
	int num2;

	for (i = '0'; i <= '9'; ++i)
	{
		for (j = '0'; j <= '9'; ++j)
		{
			for (k = '0'; k <= '9'; ++k)
			{
				for (l = '0'; l <= '9'; ++l)
				{
					num1 = ((i - 48) * 10) + (j - 48); /* creates a number in the format ij */
					num2 = ((k - 48) * 10) + (l - 48); /* creates a number in the format kl */

					if (num1 < num2)
					{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (num1 < 98)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
