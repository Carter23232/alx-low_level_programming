#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: min number.
 * @max:max number.
 *
 * Return: pointer to the allocated memory, or NULL if allocation fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= (max - min + 1); i++)
	{
		arr[i] = i;
	}
	return ((void *)arr);
}
