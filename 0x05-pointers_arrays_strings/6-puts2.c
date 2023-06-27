#include "main.h"
/**
 * puts2 - Entry point
 * puts2: prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: checks input of function
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; i >= 0; i += 2)
	{
		_putchar(str[i]);
	}
}
