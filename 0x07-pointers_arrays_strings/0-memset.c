#include "main.h"
/**
 * memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @s:
 * @param b
 * @param n
 * @return char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		++i;
	}
}
