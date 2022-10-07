#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: draw a diagonal line
 * Return: Always 0 success
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; n > x; x++)
		{
			for (y = 0; y < x; y++)
			{
				if (n > 0)
				{
					_putchar(32);
				}
			}
			if (n > 0)
			{
				_putchar(92);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
