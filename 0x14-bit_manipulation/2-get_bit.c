#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: returns the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int r_shifted = n;

	if (index > (sizeof(n) * 8) - 1)
		return (-1);
	r_shifted = n >> index;
	if (1 & r_shifted)
		return (1);
	return (0);
}
