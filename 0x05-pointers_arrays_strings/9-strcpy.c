#include "main.h"
/**
 * *_strcpy - Entry point
 * *_strcpy: copies the string pointed to by src
 *  including the terminating null byte (\0)
 *  to the buffer pointed to by dest
 *  @dest: char data type
 *  @src: char data type
 *  Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
