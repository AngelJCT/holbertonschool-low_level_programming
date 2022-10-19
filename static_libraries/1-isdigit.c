#include "main.h"
/**
 * _isdigit - return 1 if c is a digit, 0 if not
 * @c: return 1 if c is a digit, 0 if not
 * Return: Always 0 success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
