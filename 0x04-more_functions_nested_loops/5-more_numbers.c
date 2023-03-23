#include "main.h"
/**
* more_numbers -  that prints the numbers form 0 to 14, 10 times.
*
*/
void more_numbers(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
	for (j = 0; j <= 1; j++)
	{
		for (k = 0; k < 9; k++)
		{
			if (j == 1 && k <= 4)
			{
				_putchar(j + '0');
				_putchar(k + '0');
			}
			else if (j == 0 && k <= 9)
			{
				_putchar(k + '0');
			}
		}
	}
	printf("\n");

}
}
