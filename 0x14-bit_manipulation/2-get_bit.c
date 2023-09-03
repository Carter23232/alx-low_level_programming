#include "main.h"
#include <stdlib.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n : number
 * @index : index
 * return : returns the index
 */
int *binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index)
{
	if (binary(n)[31 - index] == 0 || binary(n)[31 - index] == 1)
		return (binary(n)[31 - index]);
	return (-1);
}


/**
 * binary - converts numbers to an array of binary
 * @n : number
 * return : returns array of binary
 */
int *binary(unsigned long int n)
{
	int bit_position = (sizeof(n) * 8) - 1;
	unsigned long int bit = 0;
	int *arr_binary = malloc(sizeof(int) * 31);
	int *result = arr_binary;

	while (bit_position >= 0)
	{
		bit = n >> bit_position;
		if (1 & bit)
		{
			*arr_binary = 1;
		}
		else if (bit > 0)
		{
			*arr_binary = 0;
		}
		arr_binary++;
		bit_position--;
	}
	return (result);
}
