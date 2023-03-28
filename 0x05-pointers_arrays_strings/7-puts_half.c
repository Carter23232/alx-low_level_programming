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
	if (j % 2 == 1)
	{
		j = (j - 1) / 2;
		j += 1;
	}
	else
	{
		j = j / 2;
	}

	for (; j < j; j++)
	{
		_putchar(str[j]);
	}
_putchar('\n');
}
