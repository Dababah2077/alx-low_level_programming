#include "main.h"
/**
 * print_triangle - Entry point
 * print_triangle: prints a triangle
 * @size: checks input of function
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 48; x < size; x++)
	{
	for (y = size - x; y > 1; y--)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
