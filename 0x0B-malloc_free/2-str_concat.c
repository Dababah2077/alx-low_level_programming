#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Entry point
 * _strlen: find length of string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * str_concat - Entry point
 * str_concat: concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a newly allocated space in memory
 * which contains the contents of s1
 * followed by the contents of s2, and null terminated
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *m;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
	{
		return (0);
	}
	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
		{
			m[i] = s1[i];
		}
		else
		{
			m[i] = s2[i - size1];
		}
	}
	m[i] = '\0';
	return (m);
}
