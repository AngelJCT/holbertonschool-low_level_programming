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

	j = 0;
	if (j <= n)
	{
		while (j < n)
		{
			if (j == n)
			{
				printf("%d", *(a + j));
			}
			else
			{
				printf("%d, ", *(a + j));
			}
			a++;
		}
	}
	else
	{
		while (n >= j)
		{
			if (n == j)
			{
				printf("%d", *(a + j));
			}
			else
			{
				printf("%d, ", *(a + j));
			}
			a--;
		}
	}
}
