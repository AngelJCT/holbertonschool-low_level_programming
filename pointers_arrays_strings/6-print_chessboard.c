#include "main.h"
/**
 *print_chessboard - print a pattern in shape of chessboard
 *@a: array rows
 *Return: array pattern
 *
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
	}
}
