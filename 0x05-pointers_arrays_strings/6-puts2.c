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
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		i++;
	for (i % 2 = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
