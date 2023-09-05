#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: the array
 * @height: of the array
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
