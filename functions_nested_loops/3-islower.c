#include "main.h"
/**
 * _islower - check for lowercase characters
 * @parameterc: c is any lowercase letter
 * Return: Always 0 success
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
