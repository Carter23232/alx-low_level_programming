#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse.
 * @s: string to print
 *
 *
 */
void print_rev(char *s)
{
unsigned long i;
for (i = 0; i <= strlen(s); i++)
{
	_putchar(s[strlen(s) - i]);
}
_putchar('\n');
}
