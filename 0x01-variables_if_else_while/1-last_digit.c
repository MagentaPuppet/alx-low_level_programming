#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to a variable and prints it
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	char *str;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = (n % 10);

	if (rem > 5)
	{
		str = "and is greater than 5";
	}

	else if (rem == 0)
	{
		str = "and is 0";
	}

	else if (rem < 6 && rem != 0)
	{
		str = "and is less than 6 and not 0";
	}

	printf("Last digit of %d is %d %s\n", n, rem, str);

	return (0);
}
