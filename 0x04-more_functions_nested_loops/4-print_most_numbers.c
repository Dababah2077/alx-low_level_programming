#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 * print_most_numbers: prints numbers from 0 to 9
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; n <= '9'; n++)
	{
		if (num == '2' || num == '4')
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
