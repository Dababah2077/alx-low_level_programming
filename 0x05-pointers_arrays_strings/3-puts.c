#include "main.h"
/**
 * _puts - Entry point
 * _puts: prints a string, followed by a new line
 * @str: check input of function
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
	}
	_putchar('\n');
}
