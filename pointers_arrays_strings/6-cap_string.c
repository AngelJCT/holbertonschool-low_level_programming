#include "main.h"
/**
 *cap_string - capitalize first letter of each word
 *@xy: letters
 *Return: each word capitalized
 *
 */
char *cap_string(char *xy)
{
	int u, n;
	char comp[13] = {'"', ' ', '.', '\n',
		'!', '-', '\t',
		';', '(', ')', '{',
		'}', '?', ','};

	for (u = 0; xy[u] != '\0'; u++)
	{
		if (u == 0 && xy[u] >= 'a' && xy[u] <= 'z')
		{
			xy[u] -= 32;
		}
		for (n = 0; n < 13; n++)
		{
			if ( xy[u] == c[n])
			{
				if (xy[u + 1] >= 'a' && xy[u + 1] <= 'z')
				{
					xy[u + 1] -= 32;
				}
			}
		}
	}
	return (xy);
}
