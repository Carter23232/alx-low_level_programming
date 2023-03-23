#include "main.h"
/**
* print_square -  that prints a square in termianl.
*@size : number of squares to print
*/
void print_square(int size)
{
int i, k;
for (i = 0; i < size; i++)
{
	for (k = 0; k < size; k++)
	{
		if (size > 0)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
}
