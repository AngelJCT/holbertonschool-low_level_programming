#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: draw a diagonal line
 * Return: Always 0 success
 */
void print_diagonal(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; n > x; x++)
		{
			_putchar('\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
