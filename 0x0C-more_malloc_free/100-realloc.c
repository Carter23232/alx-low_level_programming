#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: the array to be modified.
 * @old_size:old size of array.
 * @new_size: new size needed
 * Return: pointer to the allocated memory, or NULL if allocation fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		return (newptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		return (NULL);
	}
	if (new_size < old_size)
	{
		memcpy(newptr, ptr, new_size);
	}
	else
	{
		memcpy(newptr, ptr, old_size);
	}
	free(ptr);
	return (newptr);
}
