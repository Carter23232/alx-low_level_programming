#include "main.h"

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers.
  * @width: width
  * @height: hieght
  * Return: ptr to array
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		grid = (int **)malloc(height * sizeof(int *));
		if (grid == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < height; i++)
			{
				grid[i] = (int *)malloc(width * sizeof(int));
				if (grid[i] == NULL)
				{
					for (j = 0; j < height; j++)
					{
						free(grid[j]);
					}
					free(grid);
					return (NULL);
				}
			}
		}
	}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
	return (grid);
}
