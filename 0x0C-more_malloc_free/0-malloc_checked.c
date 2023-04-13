#include "main.h"
/**
 * malloc_checked - allocates memory using
 * @b: memory to allocate
 * Return: ptr to reserved mem
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
