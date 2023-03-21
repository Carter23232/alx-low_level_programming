#include "main.h"
/**
* print_last_digit - prints the last digit of a number.
* @n: - character to test
* Return: last digit
*/
int print_last_digit(int n)
{
char val = n % 10;
printf("%d", val);
	return (val);
}
