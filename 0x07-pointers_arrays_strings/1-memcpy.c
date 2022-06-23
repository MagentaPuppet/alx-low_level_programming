#include "main.h"

/**
 * _memcpy - copies "n" bytes from memory area "src"
 * to memory area "dest"
 *
 * @dest: pointer to area of memory to be filled
 * @src: pointer to area of memory to be copied from
 * @n: number of bytes from the starting byte to be filled
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		++i;
	}
	return (dest);
}
