#include "main.h"
/**
 * _islower - Entry point
 * @c: checks inputs of function
 * Return: 1 if 'c' is lowercase
 * otherwise Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
