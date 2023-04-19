#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: name to print
 * @size : size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
		for (i = 0; i < (int)size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
