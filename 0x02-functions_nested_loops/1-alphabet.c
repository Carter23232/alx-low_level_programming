#include "main.h"
void print_alphabet(void)
{
unsigned long i;
for (i = 97; i <= 122; i++)
{
	_putchar((char)i);
}
_putchar('\n');
}
