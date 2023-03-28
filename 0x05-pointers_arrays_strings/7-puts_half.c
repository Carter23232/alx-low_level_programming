#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
int j = 0, i;
while (str[j] != '\0')
{
	j++;
}
for (i = j / 2; i < j; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
