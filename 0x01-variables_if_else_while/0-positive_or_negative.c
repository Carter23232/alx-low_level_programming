#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive ", n);
	}
	else if (n == 0)
	{
		printf("%i is zero ", n);
	}
	else
		printf("%i is negative ", n);
	return (0);
}
