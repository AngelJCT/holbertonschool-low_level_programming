#include "main.h"
/**
 *_sqrt_recursion - print the square root of n
 *@n: numbers
 *Return: the square root of numbers
 *
 */
int find_square_root(int root, int n)
int _sqrt_recursion(int n)
{
	return (find_square_root(0, n));
}

/**
 * find_square_root - print the square root of nmbers
 * @root: root of n
 * @n: numbers
 * Return: return square root of n
 */
int find_square_root(int root, int n)
{
	int perfect_sqrt = root * root;

	if (perfect_sqrt < n)
	{
		return (find_square_root(root + 1, n));
	}
	else if (perfect_sqrt > n)
	{
		return (-1);
	}
	return (root);
}
