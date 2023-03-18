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
for (a = 0; a < 100; a++)
{
	for (b = a + 1; b < 100; b++)
	{
		putchar(a / 10 + '0');  /* 1/10 + 0 -> 00, 50/10 + 0 -> 50*/
		putchar(a % 10 + '0'); /* 1%10 + 0 -> 10, 50%10 + 0 -> 00*/
		putchar(' ');
		putchar(b / 10 + '0');
		putchar(b % 10 + '0');
		if (a != 98 || b != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
