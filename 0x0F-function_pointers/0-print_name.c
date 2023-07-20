#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Entry point
 * print_name: prints a name
 * @name: input
 * @f: character
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
