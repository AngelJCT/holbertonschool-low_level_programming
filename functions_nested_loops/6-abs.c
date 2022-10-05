#include "main.h"
/**
 *_abs - compute the absolute value of an integer
 *@n: absolute value of an integer
 *Return: Always 0 success
 */
int _abs(int n)
{
	if (n <= 0)
	{
		n = n * (-1);
		return (n);
	}
	else
	{
		return (n);
	}

	return (0);
}


