#include <stdlib.h>

/**
 * free_grid - frees 2D grid
 * @height: number of rows
 * @grid: memory to be freed
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
