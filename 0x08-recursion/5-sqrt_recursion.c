#include "main.h"

int _sqrt(int val, int randn);
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n:number
 *
 *
 * Return: the natural square root of a number and -1 if doesnt exist.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -  calculates square root.
 * @val:number
 * @randn: iterator;
 *
 * Return: returns the square root
 */
int _sqrt(int val, int randn)
{
	if (val <= 0 || (randn * randn) > val)
	{
		return (-1);
	}
	else if (randn * randn == val)
	{
		return (randn);
	}
	return (_sqrt(val, randn + 1));
}
