#include "main.h"
/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
int k, len = strlen(str);
if (len % 2 == 1)
{
	k = (len - 1) / 2;
	k += 1;
}
else
{
	k = len / 2;
}
for (; k < len; k++)
{
	_putchar(str[k]);
}
_putchar('\n');
}
