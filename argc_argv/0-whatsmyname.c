#include <stdio.h>
/**
 *main - Print a name
 *@argc: argument count
 *@argv: characters array
 *Return: return a name
 */
int main(int argc, char *argv[])
{
	int l;

	for (l = 0; l < argc; l++)
	{
		printf("%s\n", argv[l]);
	}
	return (0);
}
