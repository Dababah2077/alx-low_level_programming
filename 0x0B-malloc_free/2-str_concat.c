#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Entry point
 * _strlen: find the length of a string
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
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, x;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (0);
	for (x = 0; x <= size1 + size2; x++)
	{
		if (x < size1)
			m[x] = s1[x];
		else
			m[x] = s2[x - size1];
	}
	m[x] = '\0';
	return (m);
}
