#include "main.h"
/**
 *rev_string - print a string in reverse
 *@s: reverse a string
 *Return: Always 0 success
 */
void rev_string(char *s)
{
	int x, l, c, temp;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	l = 0;
	c = x - 1;

	while (l < c)
	{
		temp = s[l];
		s[l] = s[c];
		s[c] = temp;
		l++;
		c--;
	}
}
