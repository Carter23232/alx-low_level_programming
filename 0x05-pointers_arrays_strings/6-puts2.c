#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */
void puts2(char *str)
{
int i, j = 0;
while (str[j] != '\0')
{
	j++;
}
for (i = 0; i < j; i++)
{
	_putchar(str[i + 1]);
}
_putchar('\n');
}
