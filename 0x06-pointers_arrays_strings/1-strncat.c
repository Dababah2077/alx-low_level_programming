#include "main.h"
#include <string.h>
/**
 * *_strncat - Entry point
 * *_strncat: concatenates two strings
 * @src: source file
 * @dest: destination file
 * @n: checks input of file
 * Return: Returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, x2;

	x = 0;

	while (dest[x])
	{
		x++;
	}
	for (x2 = 0; src[x2] && x2 < n; x2++)
	{
		dest[x++] = src[x2];
	}

	return (dest);
}
