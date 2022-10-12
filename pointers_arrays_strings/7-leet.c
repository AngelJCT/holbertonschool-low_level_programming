#include "main.h"
/**
 *leet - change letters for numbers
 *@ch: return the letters changed into numbers
 *Return: letters changed to numbers
 */
char *leet(char *ch)
{
	int a, b;
	char let[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char num[] = {4, 3, 0, 7, 1, 4, 3, 0, 7, 1};

	for (a = 0; ch[a] != '\0'; a++)
	{
		for (b = '0'; b < 10; b++)
		{
			if (ch[a] == let[a])
			{
				ch[a] = num[b];
			}
		}
	}
	return (ch);
}
