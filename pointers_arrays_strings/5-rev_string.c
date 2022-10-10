#include "main.h"
/**
 *rev_string - print a string in reverse
 *@s: reverse a string
 *Return: Always 0 success
 */
void rev_string(char *s)
{
	int len, x;
	char *beg, *nd, temp;

	len = _strlen(s);
	beg = s;
	nd = s;

	for (x = 0; x < len - 1; x++)
	{
		nd++;
	}
	for (x = 0; x < len / 2; x++)
	{
		temp = *nd;
		*nd = *beg;
		*beg = temp;
		beg++;
		nd--;
	}
}
