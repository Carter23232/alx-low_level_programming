#include "main.h"
/**
* more_numbers -  that prints the numbers form 0 to 14, 10 times.
*
*/
void more_numbers(void)
{
int i, k;
for (i = 0; i < 10; i++)
{
	for (k = 0; k <= 14; k++)
	{
		if (k > 9)
		{
			_putchar((k / 10) + '0'); /*first digit only*/
		}
		_putchar((k % 10) + '0'); /*print last digit only*/
	}
	_putchar('\n');
}
}
