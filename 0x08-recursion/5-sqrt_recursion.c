#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n:number
 *
 *
 * Return: the natural square root of a number and -1 if doesnt exist.
 */

int _sqrt_recursion(int n)
{
	if (n % _sqrt(n, 1) != 0)
	{
		return (-1);
	}
	return ((int)_sqrt(n, 1));
}

/**
 * _sqrt -  calculates square root.
 * @n:number
 * @i: iterator;
 *
 * Return: returns the square root
 */
int _sqrt(int n, int i)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	i++;
	return (_sqrt(n, i));
}
