#include "lists.h"

/*tells the compiler to execute this file first before the main*/
void first(void) __attribute__ ((constructor));
/**
  * first - ...
  *
  * Return: Nothing.
  */

void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
