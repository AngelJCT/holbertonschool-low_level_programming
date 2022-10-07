#include "main.h"
/**
 * print_line - print a straight line
 * @n: print a straight line
 * Return: Always 0 success
 */
void print_line(int n)
{
	int J;

	if (n > 0)
	{
		for (J = 0 ; J <= n ; J++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
