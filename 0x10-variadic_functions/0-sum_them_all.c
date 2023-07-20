#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Entry point
 * sum_them_all: ..
 * @n: ..
 * Return: ..
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list args;

	if (n == 0)
		return (0);
	
	va_start (args, n);

	while(i--)
		sum += va_arg (args, int);

	va_end (args);
	return (sum);
}
