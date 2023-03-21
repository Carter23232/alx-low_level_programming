#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/*myfuctions*/
void pchar (void)
{
	printf("_putchar\n");
}
void print_alphabet(void)
{
int a;
for (a = 97; a <= 122; a++)
{
	putchar(a);
}
putchar(10);
}
#endif
