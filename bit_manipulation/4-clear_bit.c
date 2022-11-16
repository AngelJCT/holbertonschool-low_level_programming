#include "main.h"
/**
 *clear_bit-function to set bit value to 0
 *@n: bit value
 *@index: given position
 *Return: value changed to 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
