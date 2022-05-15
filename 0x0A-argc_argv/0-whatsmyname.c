#include <stdio.h>

/**
 * main - Program that prints its own name
 * @argc: Number of elements in argv
 * @argv: Array of strings passed as arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
