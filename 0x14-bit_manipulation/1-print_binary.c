#include <stdio.h>
#include "main.h"

/**
 * print_binary - Entry point
 * print_binary: ...
 * @n: ...
 * Return: ...
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1l << --bit)
		{
			putchar('1');
			printed++;
		}
		else if (printed)
			putchar ('0');
	}
	if (!printed)
		putchar('0');
}
