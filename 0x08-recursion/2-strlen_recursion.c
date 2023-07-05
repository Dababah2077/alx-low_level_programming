#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - Entry point
 * _strlen_recursion: returns the length of a string
 * @s: input
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
