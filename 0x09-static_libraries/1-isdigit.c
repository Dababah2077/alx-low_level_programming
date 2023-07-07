#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Entry point
 * _isdigit: checks for a digit (0 through 9)
 * @c: checks input of function
 * Return: 1 if 'c' is a digit
 * otherwise Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
