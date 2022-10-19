#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: array of arguments
 *Return: sum of positive numbers
 */
int main(int argc, char *argv[])
{
	int a, b, sum;
	char error[] = "Error";

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		sum = a + b;

		printf("%d\n", sum);
	}
	else
	{
		printf("%s\n", error);
		return (1);
	}
	return (0);
}
