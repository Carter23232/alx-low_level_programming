#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle.
 */
void print_triangle(int size)
{
int i, j, k;
if (size > 0)
{
	for (i = size; i > 0; i--)
	{
		for (j = 0; j < (i - 1); j++)
		{
			_putchar(' ');
		}
		for (k = j; k < size; k++)
		{
			_putchar('#');
		}
		if (i != 0)
		{
			_putchar('\n');
		}
	}
}
_putchar('\n');
}
