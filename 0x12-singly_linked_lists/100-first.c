#include "lists.h"

/**
 *tells the compiler to execute
 *this file first before the main
*/

void first(void) __attribute__ ((constructor));
/**
  * first - ...
  *
  * Return: Nothing.
  */
void first(void)
{
	printf("Hello from the constructor function!\n");
	printf("This function is executed before main.\n");
}
