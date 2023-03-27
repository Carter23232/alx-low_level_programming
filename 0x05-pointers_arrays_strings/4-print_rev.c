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
int counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	for (counter -= 1; counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
