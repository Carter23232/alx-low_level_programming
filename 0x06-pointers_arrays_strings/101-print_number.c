#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @m: Number to prints
  * Return: Nothing
  */

void print_number(int m)
{
	unsigned int n = m;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

