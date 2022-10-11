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

	if (n == 0 || n == (-1))
	{
		n = 1;
		for (j = 0; j < n; ++j)
		{
			printf("\n");
		}
	else
	{
		for (j = 0; j < n; ++j)
		{
			printf("%d", *a);
			++a;

			if (j < (n - 1))
			{
				printf(",");
			}
			else if  (j == (n - 1)
			{
				printf("\n";
			}
		}
	}
}
