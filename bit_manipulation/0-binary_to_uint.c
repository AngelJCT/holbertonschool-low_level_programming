#include "main.h"
#include <stddef.h>
/**
 *binary_to_uint-function to convert binary to unsigned int
 *@b: pointer to string of 0 and 1
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num <<= 1;
			num += b[i] - '0';
			i++;
		}
		else
		{
			return (0);
		}
	}

	return (num);
}
