#include "main.h"
#include <stdio.h>
/**
 *print_array - print array elements
 *@a: pointer
 *@n: array numbers
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d, ", *(a + j));
	}
}
