#include "main.h"

/**
  * print_times_table - Prints the n times table, starting with 0
  *@n: number to print table of
  *
  */
void print_times_table(int n)
{
int i, j;
for  (i = 0; i <= n; i++)
{
	for (j = 0; j <= n; j++)
	{
		printf("%d", i * j);
		if (j != n)
		{
			printf(",  ");
		}
	}
	printf("\n");
}
}
