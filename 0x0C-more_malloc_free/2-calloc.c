#include "main.h"
/**
 * _calloc - allocates memory for an array and fill up with 0.
 * @nmemb: number of element.
 * @size: size of data type.
 * Return: pointer to mem.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(size * nmemb);
	if (mem == NULL)
	{
		return (NULL);
	}
	memset(mem, 0, nmemb * size);
	return ((void *)mem);
}
