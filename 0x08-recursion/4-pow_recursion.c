#include "main.h"
#include <math.h>
/**
 * _pow_recursion - Entry point
 * _pow_recursion: returns the value of x raised to the power of y
 * @x: input
 * @y: input
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
