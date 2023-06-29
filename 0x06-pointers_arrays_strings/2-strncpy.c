#include "main.h"
#include <string.h>
/**
 * _strncpy - Entry point
 * _strncpy: copies a string
 * @dest: destination file
 * @src: source file
 * @n: checks input of function
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != 0; x++)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
