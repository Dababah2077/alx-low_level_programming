#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void);
{
	int line, i;

	for (line = 0; line <= 9; line++)
	{
		for (i = 'a'; i = 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
