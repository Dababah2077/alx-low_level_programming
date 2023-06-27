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
	while (*str != '\0')
	{
		str += 2;
	}
}
