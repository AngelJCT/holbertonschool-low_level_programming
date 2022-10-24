#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - print a 2d array of integers
 *@width: rows of integers
 *@height: columns of integers
 *Return: pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = malloc(sizeof(int *) * width);
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
