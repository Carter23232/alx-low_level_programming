#include "main.h"

/**
 * _pow - Power of a number
 * @num: base
 * @power: power
 * Return: result
 */

double _pow(int num, int power)
{
	int i, result = 1;

	for (i = 0; i < power; i++)
	{
		result *= num;
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
	int counter = 0, number_dup = n, first_digit;

	while ((number_dup /= 10))
	{
		counter++;
	}
	while (counter >= 0)
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}
		first_digit = n / (int)_pow(10, counter);
		first_digit %= 10;
		counter--;
		_putchar(first_digit + '0');
	}
}

