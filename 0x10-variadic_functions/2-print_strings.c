#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator : string to be printed between numbers.
 * @n : is the number of integers passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *ptr;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(arg, char*);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
		va_end(arg);
		putchar('\n');
}
