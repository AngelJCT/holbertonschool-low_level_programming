#include "main.h"
/**
 *reverse_array - reverse an array
 *@a: pointer for the array
 *@n: number of elements in the array
 *Return: Always 0 success
 */
void reverse_array(int *a, int n)
{
	int a = 0, temp;

	n = n -1;

	while (a < n)
	{
		temp = *a[a];
		*a[a] = *a[n];
		*a[n] = temp;
		a++;
		n--;
	}
}

