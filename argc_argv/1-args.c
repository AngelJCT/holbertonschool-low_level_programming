#include <stdio.h>
/**
 *main - print numbers of arguments
 *@argc: argument count
 *@argv: array of characters
 *Return: return number of arguments
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("%d = %s\n", i, argv[i]);
	}
	return (0);
}
