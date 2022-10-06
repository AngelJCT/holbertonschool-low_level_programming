#include "main.h"
/**
 * _isupper - return 1 if c is upper, 0 if not
 * @c: return 1 if c is upper, 0 if not
 * Return: Always 0 success
 */
int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
	{
		_putchar(c);
		return (1);
	}
	else
		return (0);
}
