#include "variadic_functions.h"
int _strlen(const char *format, char *str);
/**
 * print_all -  prints anything.
 * @format : is a list of types of arguments passed to the function.
 *
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	char c;
	int i, size, counter = 0, j = 0;
	float f;
	char *s;
	char *str = "cifs";

	size = _strlen(format, str);
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
		if (counter < size && j != -1)
		{
			printf(", ");
		}
		counter++;
	}
	va_end(arg);
	printf("\n");
}


/**
 * _strlen -  length of string.
 * @format : is a list of types of arguments passed to the function.
 * @str : striing to cmp
 * Return: size;
 */
int _strlen(const char *format, char *str)
{
	int j = 0, size = 0;

	while (format[j] != '\0')
	{
		if (strchr(str, format[j]) != NULL)
			size++;
		j++;
	}
	return (size);
}
