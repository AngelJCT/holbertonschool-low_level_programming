#include "main.h"
/**
 * print_square - print a square
 * @size: print a square
 * Return: Always 0 success
 */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; size > a; a++)
		{
			for (b = 0; size > b; b++)
			{
			_putchar(35);
			}
		}
	}
	_putchar('\n');
}
