#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid
 * @height: height of the grid
 * owned by osgoodtech26
 */
void free_grid(int **grid, int height)
{
	int p;

	for (p = 0; p < height; p++)

	free(grid[p]);
	free(grid);
}
