#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 * print_most_numbers: prints numbers from 0 to 9
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
