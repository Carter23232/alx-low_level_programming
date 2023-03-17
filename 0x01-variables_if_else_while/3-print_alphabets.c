#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
  * main - Entry point
   * Return: Always 1 (Success)
  */
 /* betty style doc for function main goes there */
int main(void)
{
int a;
	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	for (a = 65; a <= 90; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
