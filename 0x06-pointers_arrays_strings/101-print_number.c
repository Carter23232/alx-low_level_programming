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
	int nod = 0;
	unsigned int first_digit = 0;
	unsigned int abs_n = n < 0 ? -n : n;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (abs_n >= pow(10, nod + 1))
	{
		nod++;
	}
	while (nod >= 0)
	{
		first_digit = abs_n / pow(10, nod);
		first_digit %= 10;
		nod--;
		_putchar(first_digit + '0');
	}
	if (n < 0)
	{
		_putchar('-');
	}
}
