#include <stdio.h>
#include "main.h"
/**
 * _isupper - Entry point
 * _isupper: checks for uppercase character
 * @c: checks input of function
 * Return: 1 if 'c' is uppercase
 * otherwise Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
