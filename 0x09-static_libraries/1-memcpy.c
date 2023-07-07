#include "main.h"
#include <string.h>
/**
 * *_memcpy - Entry point
 * *_memcpy: copies memory area
 * @dest: destination file
 * @src: source file
 * @n: check input of function
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		dest[x] = src[x];
	}
	return (dest);
}
