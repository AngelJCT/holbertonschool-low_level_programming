#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiply two numbers
 *@argc: argument count
 *@argv: array of arguments
 *Return: multiplication of two numbers
 */
int main(int argc, char *argv[])
{
	int res, i, n;
	char error[] = "Error";

	if (argc == 3)
	{
		i = atoi(argv[1]);
		n = atoi(argv[2]);

		res = i * n;
		printf("%d\n", res);
	}
	else
	{
		printf("%s", error);
		return (1);
	}
	return (0);
}
