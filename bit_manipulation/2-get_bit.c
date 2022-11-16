#include "main.h"
/**
 *get_bit-function to get the value of a bit at a given index
 *@n: bit value
 *@index:position of given bit
 *Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > n)
	{
		return (-1);
	}

	bit = ((n >> index) & 1);

	return (bit);
}
