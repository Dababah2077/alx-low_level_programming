#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 * string_nconcat: concates two strings
 * @s1: string
 * @s2: string
 * @n: input
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];
	for (y = 0; y < n; y++)
	{
		str[x] = s2[y];
		x++;
	}
	str[x] = '\0';
	return (str);
}
