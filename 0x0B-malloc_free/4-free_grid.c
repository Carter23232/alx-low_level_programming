#include "main.h"
/**
 * free_grid - Frees a 2 dimensional grid of integers
 * @grid: Pointer to a 2 dimensional grid of integers
 * @height: The height of the grid
 *
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i, j;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[i]);
		}
		free(grid);
		break;
	}
}
