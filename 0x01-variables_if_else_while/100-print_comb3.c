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
int a, b;
for (a = 48; a <= 56; a++)
{
	for (b = a + 1; b <= 57; b++)
	{
		putchar(a);
		putchar(b);
		if (b < 57)
		putchar(44);
		putchar(32);
	}
}
putchar(10);
return (0);
}
