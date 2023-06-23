#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Entry point
 * more_numbers:  prints 10 times the numbers, from 0 to 14
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
