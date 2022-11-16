#include "main.h"
#include <stddef.h>
/**
 *print_binary-function to print binary representation of a number
 *@n: given number
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1 << 31; i > 0; i = i / 2)
	{
		(n & i) ? _putchar('1') : _putchar('0');
	}
	_putchar('\n');
}
