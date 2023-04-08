#include "main.h"
/**
 * _isdigit -  tells if a character is a number  or not
 * @c : character to test
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
