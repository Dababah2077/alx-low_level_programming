#include "main.h"
#include <string.h>
/**
 * *_strcat - Entry point
 * *_strcat: appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * @src: source file
 * @dest: destination file
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, x2;

	x = 0;

	while (dest[x])
	{
		x++;
	}
	for (x2 = 0; src[x2] != 0; x2++)
	{
		dest[x] = src[x2];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
