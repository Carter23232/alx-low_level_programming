#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
int i, j, counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
char rev[counter];
	for (i = 0, j = counter - 1; i < counter; i++, j--)
	{
		rev[j] = s[i];
	}
	s = rev;
}

