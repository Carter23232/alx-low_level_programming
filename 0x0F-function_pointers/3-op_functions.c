#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: left operand
 * @b: right operand
 * Return: result.
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - sub b from a
 * @a: left operand
 * @b: right operand
 * Return: result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mult a and b
 * @a: left operand
 * @b: right operand
 * Return: result.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divided a by b
 * @a: left operand
 * @b: right operand
 * Return: result.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod of a and b
 * @a: left operand
 * @b: right operand
 * Return: result.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
