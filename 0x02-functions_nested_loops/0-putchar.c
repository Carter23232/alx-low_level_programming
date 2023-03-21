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
	char *msg = "_putchar\n";
	unsigned long i;
	for (i = 0; i < strlen(msg); i++)
	{
		_putchar(msg[i]);
	}
	return (0);
}
