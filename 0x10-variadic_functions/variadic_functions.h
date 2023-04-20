#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct typ - Struct format_types
 * @type: The conversion specifier
 * @f: The function pointer
 */
typedef struct typ
{
	char *type;
	void (*f)(char *, va_list);
} typ;
void _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _strlen(const char *format, char *str);




#endif
