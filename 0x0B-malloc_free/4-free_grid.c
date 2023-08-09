#include "main.h"

/**
 * free_grid - Frees a two dimensional grid previously created
 * @grid: two dimensional grid
 * @height: columns
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
