#include "main.h"
/**
* print_sign - prints the sign of a number.
* @n: - character to test
* Return: 1 if greater than 0. 0 otherwise
*/
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
