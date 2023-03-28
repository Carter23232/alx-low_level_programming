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
int counter = 0, i;
	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
