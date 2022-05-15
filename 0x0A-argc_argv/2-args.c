#include <stdio.h>

/**
 * main - Program that prints all the arguments it receives
 * @argc: Number of elements in argv
 * @argv: Array of strings passed as arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
