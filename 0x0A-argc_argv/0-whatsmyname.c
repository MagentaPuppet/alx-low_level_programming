#include <stdio.h>

/**
 * main - Program that prints its own name
 * @argc: Number of elements in argv
 * @argv: Array of strings passed as arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
