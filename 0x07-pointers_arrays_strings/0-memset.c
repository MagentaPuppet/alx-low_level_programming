#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @s: pointer to area of memory to be filled
 * @b: constant byte to be filled into the area of memory
 * @n: number of bytes from the starting byte to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		++i;
	}
	return (s);
}
