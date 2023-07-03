#include "main.h"
#include <string.h>
/**
 * *_strstr - Entry point
 * *_strstr: locates a substring
 * @haystack: first pointer
 * @needle: second pointer
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;
	char *p;

	x = 0;
	while (haystack[x] != 0)
	{
		y = 0;
		while (needle[y] != 0)
		{
			if (haystack[x] == needle[y])
			{
				p = &haystack[x];
				return (p);
				y++;
			}
		x++;
		}
	}
	return (0);
}
