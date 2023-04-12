#include "main.h"

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers.
  * @width: width
  * @height: hieght
  * Return: ptr to array
  */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);

			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			arr[i][k] = 0;
	}

	return (arr);
}
