#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print all natural numbers from n to 98
 *@n: print all natural numbers from n to 98
 *Return: Always 0 success
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
		if (n == 98)
		{
			printf("%i", n);
		}
		else
			printf("%i, ", n);
		n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%i", n);
			n--;
		}
	}
	_putchar('\n');
}
