#include "main.h"
#include <stdlib.h>

/**
 * get_endianness -tells the bit order of a system
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	unsigned int hex_val = 0x12345678;
	unsigned char *bytes = (unsigned char *)&hex_val;

	if (bytes[0] == 0x12)
		return (0);
	return (1);
}
