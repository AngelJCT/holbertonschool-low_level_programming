#include "main.h"
/**
 * swap_int - swap values
 * @a: swap values with b
 * @b: swap value with a
 * Return: Always 0 success
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
