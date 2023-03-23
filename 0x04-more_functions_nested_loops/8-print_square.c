#include "main.h"
/**
* print_square -  that prints a square in termianl.
*@size : number of squares to print
*/
void print_square(int size)
{
int i;
for (i = 0; i < size; i++)
{
	if (size > 0)
	{
		_putchar('#');
	}
}
_putchar('\n');
}
