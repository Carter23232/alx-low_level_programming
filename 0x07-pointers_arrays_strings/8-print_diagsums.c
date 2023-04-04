#include "main.h"

/**
  * print_diagsums - prints the sum of the two diagonals of a square matrix
  * @a: two dimension array of a size
  * @size: size
  */
void print_diagsums(int *a, int size)
{
	int i, f_dia = 0, s_dia = 0;

	for (i = 0; i < size; i++)
	{
		f_dia += a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
		s_dia += a[i * size + (size - i - 1)];
	}
	printf("%i, %i\n", f_dia, s_dia);
}
