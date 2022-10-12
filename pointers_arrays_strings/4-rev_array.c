#include "main.h"
/**
 *reverse_array - reverse an array
 *@a: pointer for the array
 *@n: number of elements in the array
 *Return: Always 0 success
 */
void reverse_array(int *a, int n)
{
	int x = 0, temp;

	n = n -1;

	while (x < n)
	{
		temp = *a[x];
		*a[x] = *a[n];
		*a[n] = temp;
		x++;
		n--;
	}
}

