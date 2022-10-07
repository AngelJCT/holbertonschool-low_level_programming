#include "main.h"
/**
 * print_line - print a straight line
 * @n: print a straight line
 * Return: Always 0 success
 */
void print_line(int n)
{
	int exe;

	if (n > 0)
	{
		for (exe = 0 ; exe <= n ; exe++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
