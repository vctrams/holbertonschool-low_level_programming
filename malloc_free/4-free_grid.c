#include "main.h"
#include "stdlib.h"

/**
 * free_grid - frees grid
 * @grid: 2
 * @height: 2 dimensional grid
 * Return: 0
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
