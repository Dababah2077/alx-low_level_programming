#include "main.h"
/**
 * islower - Entry point
 * Return: 1 if 'c' is lowercase
 * otherwise Always 0 (Success)
 */
int _islower(int c)
{
	int c;
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
