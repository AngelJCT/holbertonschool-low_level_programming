#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - print sum of two diagonals
 *@a: two dimensional array
 *@size: number of digits
 *Return: sum of two diagonals
 */
void print_diagsums(int *a, int size)
{
	int e, mus1, mus2;

	for (e = 0; e < size; e++)
	{
		mus1 += *(a + (e * size + e));
        mus2 += a[(size - 1) + ((size - 1) * e)];
	}
	printf("%d, %d\n", mus1, mus2);
}
