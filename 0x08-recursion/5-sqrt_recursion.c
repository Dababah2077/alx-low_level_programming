#include "main.h"
#include <math.h>
/**
 * helperFunction - Entry point
 * helperFunction: checks if sqrt of number exists
 * @num: number
 * @x: possible sqrt of number
 * Return: sqrt of number ot -1 for error
 */
int helperFunction(int num, int x)
{
	if (x * x == num)
	{
		return (x);
	}
	else
	{
		if (x * x > num)
		{
			return (-1);
		}
		else
		{
			return (helperFunction(num, x + 1));
		}
	}
}

/**
 * _sqrt_recursion - Entry point
 * _sqrt_recursion: returns the natural square root of a number
 * @n: input
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (helperFunction(n, 0));
	}
}

