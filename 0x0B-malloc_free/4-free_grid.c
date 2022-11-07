#include <stdlib.h>
#include "main.h"
/**
  * free_grid - frees a 2 dimensional grid previously created
  * by your alloc_grid function
  * @grid: grid to be free
  * @height: height of the grid
  * Return: Nothing
  */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height == 0)

		return;

	for (x = 0; x < height; x++)

		free(grid[x]);

	free(grid);
}
