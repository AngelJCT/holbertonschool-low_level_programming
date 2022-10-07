#include "main.h"
/**
 * print_line - print a straight line
 * @n: print a straight line
 * Return: Always 0 success
 */
void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0 ; m <= n ; m++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
