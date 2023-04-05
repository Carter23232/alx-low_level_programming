#include "main.h"
int primechk(int n, int i);
/**
 * is_prime_number - checks if a number is a prime.
 * @n:number
 *
 *
 * Return: 1 if prime and 0 if otherwise.
 */
int is_prime_number(int n)
{
	return (primechk(n, 1));
}


/**
 * primechk - checks if a number is a prime.
 * @n:number
 * @i: counter
 *
 * Return: 1 if prime and 0 if otherwise.
 */

int primechk(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i > 1 && n % i == 0)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	i++;
	return (primechk(n, i));
}
