#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to print
 *@f: function being pointed to
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
