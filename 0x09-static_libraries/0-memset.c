#include "main.h"
#include <string.h>
/**
 * *_memset - Entry point
 * *_memset: fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: bytes of memory area
 * Return: Returns a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}
