#include "main.h"
/**
 *rev_string - print a string in reverse
 *@s: reverse a string
 *Return: Always 0 success
 */
void rev_string(char *s)
{
	int x, l, count = 0, temp;

	while (s[count] != '\0')
	{
		count++;
	}

	l = count - 1;

	for (x = 0; x < count; x++)
	{
		temp = s[x];
		s[x] = s[l];
		s[l] = temp;
		x++;
		l--;
	}
}
