#include "main.h"
/**
 * print_line - print a straight line
 * @n: print a straight line
 * Return: Always 0 success
 */
void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0 ; j <= n ; j++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
