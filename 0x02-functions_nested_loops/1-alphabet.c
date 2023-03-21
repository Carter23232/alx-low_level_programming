#include "main.h"
#include <stdio.h>
#include <string.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
unsigned long i;
for (i = 97; i < 122; i++)
{
	_putchar((char)i);
}
_putchar('\n');
return (0);
}
