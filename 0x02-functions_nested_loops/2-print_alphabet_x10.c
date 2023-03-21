#include "main.h"
/**
 * print_alphabet_x10 -  prints the alphabet 10 times
 *
 *
 */
void print_alphabet_x10(void)
{
unsigned long i, h;
for (h = 0; h < 10; h++)
{
	for (i = 97; i <= 122; i++)
	{
		_putchar((char)i);
	}
	_putchar('\n');
}
}
