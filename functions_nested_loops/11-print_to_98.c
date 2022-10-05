#include "main.h"
/**
 *print_to_98 - print all natural numbers from n to 98
 *@n: print all natural numbers from n to 98
 *Return: Always 0 success
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
		n++;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
