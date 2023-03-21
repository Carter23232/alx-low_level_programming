#include "main.h"
/**
* print_to_98 - prints all natural numbers from n to 98.
* @n: - starting point
*
*/
void print_to_98(int n)
{
int num, fdig, ldig;
	for (num = n; num <= 98; num++)
	{
		if (num < 9)
		{
			_putchar(num + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			ldig = num % 10;
			fdig = (num - ldig) / 10;
			_putchar(fdig + '0');
			_putchar(ldig + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	putchar('\n');
}
