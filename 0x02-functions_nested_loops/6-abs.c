#include "main.h"
/**
 * _abs - Entry point
 * _abs: function to computes the absolute value of an integer
 * @n: takes in integer type input for funtion
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
