#include "main.h"
#include <string.h>
/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */
void puts2(char *str)
{
int i;
for (i = 0; i < (int)(strlen(str)); i += 2)
{
	_putchar(str[i]);
}
_putchar('\n');
}
