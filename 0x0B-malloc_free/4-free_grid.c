#include "main.h"

/**
 * free_grid - Function entry
 * Description: A function that frees a grid previously
 * ...created by your alloc_grid function
 * @grid: width of the grid
 * @height: height of the grid
 * Return: See nothing!
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
