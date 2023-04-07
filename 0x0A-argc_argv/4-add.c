#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 *@argc: length of string
 *@argv: array of string
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			sum = 0;
			break;
		}
	}
	if (argc > 1 && sum > 0)
	{
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}
