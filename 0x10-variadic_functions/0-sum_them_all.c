#include "variadic_functions.h"

/**
 * sum_them_all - calcuate the sum of all arg passed.
 * @n: number of arg passed
 * Return: result or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0, i;

	if (n != 0)
	{
		va_start(arg, n);
		for (i = 0; i < (int)n; i++)
		{
			sum += va_arg(arg, int);
		}
		va_end(arg);
		return (sum);
	}
	return (0);
}
