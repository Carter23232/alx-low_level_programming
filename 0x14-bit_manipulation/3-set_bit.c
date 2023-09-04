#include "main.h"
#include <stdlib.h>

/**
 * set_bit - set a bit at a given index to 1
 * @n: number
 * @index: index
 * Return: returns the index 1 if set or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n_c = *n;

	if (index > (sizeof(n) * 8) - 1)
		return (-1);
	*n = n_c | (1 << index);
	return (1);
}
