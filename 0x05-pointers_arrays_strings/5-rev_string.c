#include "main.h"
#include <string.h>
/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
int len = _strlen(s), i;
char temp;
for (i = 0; i < len / 2; i++)
{
	temp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = temp;
}
}

