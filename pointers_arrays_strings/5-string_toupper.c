#include "main.h"
/**
 *string_toupper - change all lowercase to uppercase
 *@abc: letters
 *Return: Always 0 success
 */
char *string_toupper(char *abc)
{
	int j;

	for (j = 0; abc[j] != '\0'; j++)
	{
		if (abc[j] >= 'a' && abc[j] <= 'z')
		{
			abc[j] = abc[j] - 32;
		}
	}
	return (abc);
}
