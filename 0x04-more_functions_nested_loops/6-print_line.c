#include "main.h"
/**
 * print_line - Entry point
 * print_line:  draws a straight line in the terminal
 * Return: Always 0 (Success)
 * @n: check input of function
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
