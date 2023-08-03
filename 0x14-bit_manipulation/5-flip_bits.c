#include "main.h"

/**
 * flip_bits - Entry point
 * flip_bits: ...
 * @n: ...
 * @m: ..
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int h = 0;

	while (x)
	{
		if (x & 1ul)
			h++;
		x = x >> 1;
	}
	return (h);
}
