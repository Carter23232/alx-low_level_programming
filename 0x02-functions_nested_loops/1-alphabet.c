#include "main.h"
/* more headers goes there */
/**
  * main - Entry point
   * Return: Always 1 (Success)
 */
void print_alphabet(void)
{
int a;
for (a = 97; a <= 122; a++)
{
	putchar(a);
}
putchar(10);
}
