#include <stdio.h>
/**
 *main - print numbers of arguments
 *@argc: argument count
 *@argv: array of characters
 *Return: return number of arguments
 */
int main(int argc, char *argv[])
{
	if (argv[0] == 0)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
