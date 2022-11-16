#include "main.h"
/**
 *set_bit-function to set the value of a bit to 1
 *@n: bit value
 *@index: given position
 *Return: value of bit to 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	return (*n |= 1 << index);
}
