#include "main.h"
/**
 * print_rev - Entry point
 * print_rev: prints a string, in reverse, followed by a new line
 * @s: checks input of function
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
