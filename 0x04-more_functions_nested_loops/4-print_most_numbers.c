#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 * print_most_numbers: prints numbers from 0 to 9
 * Return: void
 */
void print_most_numbers(void)
{
	char c;

	while (c >= 48 && c <= 57)
	{
		if (c == 50 || c == 52)
		{
			continue;
		}
		_putchar(c);
	}
}
