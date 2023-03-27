#include "main.h"
/**
 * swap_int - swaps the contecnt of two given variables
 * @a: operand a
 * @b: operand b
 */
void swap_int(int *a, int *b)
{
int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
