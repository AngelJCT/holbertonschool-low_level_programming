#include "main.h"
#include <stddef.h>
/**
 *print_binary-function to print binary representation of a number
 *@n: given number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
