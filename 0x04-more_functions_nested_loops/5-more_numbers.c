#include "main.h"
/**
* more_numbers -  that prints the numbers form 0 to 14, 10 times.
*
*/
void more_numbers(void)
{
int i, j, k;
char output[500];
int index = 0;
for (i = 0; i < 10; i++)
{
	for (j = 0; j <= 1; j++)
	{
		for (k = 0; k < 9; k++)
		{
			if (j == 1 && k <= 4)
			{
				output[index++] = j + '0';
				output[index++] = k + '0';
			}
			else if (j == 0 && k <= 9)
			{
				output[index++] = k + '0';
			}
		}
	}
	output[index++] = '\n';

}
for (i = 0; i < index; i++)
{
	_putchar(output[i]);
}
}
