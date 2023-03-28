#include "main.h"
#include <stdlib.h>
/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */

void rev_string(char *s)
{
int i, j, counter = 0;
char *rev;
	while (s[counter] != '\0')
	{
		counter++;
	}
	rev = (char *)malloc(counter * sizeof(char));
	for (i = 0, j = counter - 1; i < counter; i++, j--)
	{
		rev[j] = s[i];
	}
	s = rev;
}

