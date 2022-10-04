#include "main.h"
#include <stdlib.h>

/**
 * free-grid - frees a 2dim
 * @grid: The int grid
 * @height: The height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
