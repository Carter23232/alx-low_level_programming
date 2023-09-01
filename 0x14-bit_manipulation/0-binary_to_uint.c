#include <stdio.h>
/**
 * binary_to_uint - free a listint_t linked list
 * @b: pointer to head
 * Return: unsigned number
*/
int i_pow (int num, int counter);
int todigit(char b);

unsigned int binary_to_uint(const char *b)
{
	int counter = 0, value = 0;
	const char *c_b = b;

	if (b == NULL)
		return (0);
	while(*b != '\0')
	{
		if  (*b == '1' || *b == '0')
			counter++;
		else
			return (0);
		b++;
	}
	while (counter >= 0)
	{
		counter--;
		value += i_pow(2, counter) * todigit(*b);
<<<<<<< HEAD
		c_b++;
=======
		b++;
>>>>>>> refs/remotes/origin/main
	}
	return (value);
}
int i_pow (int num, int counter)
{
	int res = 1;
	if (counter == 0)
		return (1);
	while (counter > 0)
	{
		res *= num;
		counter--;
	}
	return (res);
}

int todigit(char b)
{
	if (b == '1')
		return (1);
        return (0);
}
