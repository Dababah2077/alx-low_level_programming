#include "main.h"
#include <string.h>
/**
 * print_chessboard - Entry point
 * print_chessboard: prints the chessboard
 * @a: array of chessboard
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
