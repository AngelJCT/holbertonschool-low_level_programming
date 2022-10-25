#include "main.h"
#include <stdlib.h>
/**
 *free_grid - free grid height
 *@grid: allocation grid
 *@height: space to free
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
