#include "main.h"
/**
 * print_sign - Entry point
 * print_sign: function to check the sign of number
 * @n: check input of function
 * Return: 1 if 'n' is greater than zero
 * -1 if 'n' is less than zero
 *  0 if 'n' is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
