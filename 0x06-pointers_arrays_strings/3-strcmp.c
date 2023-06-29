#include "main.h"
#include <string.h>
/**
 * _strcmp - Entry point
 * _strcmp: compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if true, 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			result = ((int)*s1 - 0) - ((int)*s2 - 0);
			break;
		}
	}
	return (result);
}
