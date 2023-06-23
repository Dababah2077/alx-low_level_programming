#include "main.h"
/**
 * print_diagonal - Entry point
 * print_diagonal: draws a diagonal line on the terminal
 * @n: check input of function
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(32);
		}
		for (y = 0; y < n; y++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
