#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main-print calculator
 *@argc: arguments count
 *@argv: array of arguments
 *Return: pointer to function
 */
int main(int argc, char *argv[])
{
	int a, b, x;
	int (*c)(int, int);
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	p = (argv[2]);

	if ((*p == '/' && b == 0) || (*p == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(p) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else
	{
		c = get_op_func(p);
		x = c(a, b);
	}
	printf("%d\n", x);
	return (0);
}
