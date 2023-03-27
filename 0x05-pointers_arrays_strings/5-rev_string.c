#include "main.h"
/**
 * print_rev - prints a string in reverse.
 * @s: string to print
 *
 *
 */
void print_rev(char *s)
{
int counter = 0;
char *revstr = "";
while (s[counter] != '\0')
{
	counter++;
}
for (counter -= 1; counter >= 0; counter--)
{
	revstr += (s[counter]);
}
*s = *revstr;
}
