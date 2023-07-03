#include "main.h"
#include <string.h>
/**
 * _strspn - Entry point
 * _strspn: gets the length of a prefix substring
 * @s: 1st pointer
 * @accept: 2nd pointer
 * Return: the number of bytes in the initial segment of s 
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0 ; accept[y] != s[x]; y++)
		{
			if (accept[y] == 0)
			{
				return (x);
			}
		}
	}
	return (x);
}
