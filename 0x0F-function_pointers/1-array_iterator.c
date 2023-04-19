#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of arr
 * @array: name to print
 * @size : size of the array
 * @action: pointor to fuction you need
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < (int)size; i++)
		{
			action(array[i]);
		}
}
