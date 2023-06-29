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
	int str1, str2;

	str1 = 0;

	while (dest[str1])
	{
		str1++;
	}
	for (str2 = 0; src[str2]; str2++)
	{
		dest[str1++] = src[str2++];
	}

	return (dest);
}
