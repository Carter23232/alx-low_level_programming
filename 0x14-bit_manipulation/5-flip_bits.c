#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits needed to flip a number to another
 * @n: first number
 * @m: second number
 * Return: returns number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new_val = m ^ n, new_bit;
	int bit_operator = (sizeof(m) * 8);
	unsigned int flipbits = 0;

	while (bit_operator > 0)
	{
		new_bit = new_val >> bit_operator;
		if (1 & new_bit)
			flipbits++;
		bit_operator--;
	}
	return (flipbits);
}
