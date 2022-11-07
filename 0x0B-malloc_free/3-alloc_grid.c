#include <stdlib.h>
#include "main.h"
/**
  * **alloc_grid - allocates a grid of integers
  * @width: width of the grid
  * @height: height of the grid
  * Return: Null on failure or if width or height is 0 or negative
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));

		if (grid[x] == NULL)
		{

			for (x--; x >= 0; x--)

				free(grid[x]);

			free(grid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)

		for (y = 0; y < width; y++)

			grid[x][y] = 0;

	return (grid);

}
