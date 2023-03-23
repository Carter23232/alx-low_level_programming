#include "main.h"
/**
* print_line -  that prints a line in termianl.
*@n : number of lines to print
*/
void print_line(int n)
{
int i;
if (n > 0)
{
	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
}
_putchar('\n');
}
