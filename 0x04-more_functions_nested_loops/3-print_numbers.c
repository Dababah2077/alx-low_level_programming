#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Entry point
 * print_numbers: prints the numbers, from 0 to 9
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int c = 48;

	while (c >= 48 && c <= 57)
	{
		_putchar(c);
	}
	_putchar('\n');
}
