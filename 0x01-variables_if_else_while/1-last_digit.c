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
int last_val;
char *msg = "";
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_val = n % 10;
	if (last_val > 5)
	{
		msg = "and is greater than 5";
	}
	else if (last_val == 0)
	{
		msg = "and is 0";
	}
	else if (last_val < 6 && last_val != 0)
	{
		msg = "and is less than 6 and not 0";
	}
	printf("Last digit of %i is %i %s\n", n, last_val, msg);
	return (0);
}
