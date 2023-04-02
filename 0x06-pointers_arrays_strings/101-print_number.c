#include "main.h"

/**
  * _pow - calculates the pow of a number
  * @b: base
  * @p: power
  * Return: result
  */

int _pow(int b, int p)
{
	int i, result = 1;

	for (i = 0; i < p; i++)
	{
		result *= b;
	}
	return (result);
}

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  * Return: Nothing
  */

void print_number(int n)
{
	int nod = 0, dup = n;
	unsigned int first_digit = 0;

	while ((dup /= 10))
	{
		nod++;
	}
	if (n != 0)
	{
		while (nod >= 0)
		{
			if (n < 0)
			{
				n *= -1;
				_putchar('-');
			}
			first_digit = n / _pow(10, nod);
			first_digit %= 10;
			nod--;
			_putchar(first_digit + '0');
		}
	}
	else
	{
		_putchar('0');
	}
}

