#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 * print_most_numbers: prints numbers from 0 to 9
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int n = 0;

	for (n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
