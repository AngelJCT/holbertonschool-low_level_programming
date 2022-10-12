#include "main.h"
/**
 *cap_string - capitalize first letter of each word
 *@xy: letters
 *Return: each word capitalized
 *
 */
char *cap_string(char *xy)
{
	int u;

	for (u = 0; xy[u] != '\0'; u++)
	{
		if (u == 0)
		{
			if (xy[u]  >= 'a' && xy[u] <= 'z')
			{
				xy[u] = xy[u] - 32;
			}
			continue;
		}
		if (xy[u] == ' ' || xy[u] == ',' || xy[u] == '.')
		{
			++u;
			if (xy[u] >= 'a' && xy[u] <= 'z')
			{
				xy[u] = xy[u] - 32;
			}
			continue;
		}
	}
	return (xy);
}
