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
for (a = '0'; a <= '9'; a++)
{
	for (b = '0'; b <= '9'; b++)
	{
		putchar(a);
		putchar(b);
		if (b != '9')
		{
			putchar(',');
			putchar(' ');
		}
		if (a != '9')
		{
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
