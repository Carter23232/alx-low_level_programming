#include "variadic_functions.h"

/**
 * print_all -  prints anything.
 * @format : is a list of types of arguments passed to the function.
 *
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int counter = 0, size = 0, j = 0;
	char c;
	int i;
	float f;
	char *s;
	char *str = "cifs";

	while (format[j] != '\0')
	{
		if (strchr(str, format[j]) != NULL)
			size++;
		j++;
	}
	va_start(arg, format);
	while (counter < size)
	{
		j = 0;
		switch (format[counter])
		{
		case 'c':
			c =  (char)va_arg(arg, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(arg, int);
			printf("%i", i);
			break;
		case 'f':
			f = (float)va_arg(arg, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(arg, char*);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
				break;
			}
		default:
			j = -1;
		}
		if (counter < size && (int)j != -1)
		{
			printf(", ");
		}
		counter++;
	}
	va_end(arg);
	printf("\n");
}
