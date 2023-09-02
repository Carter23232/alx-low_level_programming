#include "main.h"

/**
 *print_binary - print the binary of a number
 *@n: number to convert
 */
void print_binary(unsigned long int n)
{
	int bit_position = (sizeof(n) * 8) - 1;
	unsigned long int bit = 0;

	if (n == 0)
		_putchar('0');
	while (bit_position >= 0)
	{
		bit = n >> bit_position;
		if (1 & bit)
			_putchar('1');
		else if (bit > 0)
			_putchar('0');
		bit_position--;
	}
	_putchar('\n');
}
