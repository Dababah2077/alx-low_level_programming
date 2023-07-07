#include "main.h"
#include <string.h>
/**
 * *_strchr - Entry point
 * *_strchr: locates a character in a string
 * @s: pointer
 * @c: character
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
