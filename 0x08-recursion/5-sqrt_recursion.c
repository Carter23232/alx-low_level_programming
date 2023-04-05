#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n:number
 *
 *
 * Return: the natural square root of a number and -1 if doesnt exist.
 */
int _sqrt_recursion(int n)
{
	if (n % (int)sqrt(n) != 0)
	{
		return (-1);
	}
	return ((int)sqrt(n));
}
