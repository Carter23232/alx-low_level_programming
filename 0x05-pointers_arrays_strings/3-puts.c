#include "main.h"
#include <string.h>
/**
 *_puts - prints a string.
 * @str: string to print
 *
 */
void _puts(char *str)
{
int i;
	for (i = 0; i <= strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

