#include "main.h"
/**
 * _isalpha - check for alphabetic characters
 * @c: if c is upper or lowercase return 1
 * Return: Always 0 success
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
