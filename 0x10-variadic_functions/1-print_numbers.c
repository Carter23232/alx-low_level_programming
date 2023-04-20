#include "variadic_functions.h"

void print_number(int n);

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator : string to be printed between numbers.
 * @n : is the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, j;

	if (separator != NULL)
	{
		va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			print_number(va_arg(arg, int));
			putchar('\n');
			for (j = 0; j < strlen(separator); j++)
			{
				putchar(separator[j]);
			}
		}
		va_end(arg);
		putchar('\n');

	}
}

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
