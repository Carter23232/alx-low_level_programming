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
	int h, i, sum = 0;

	for (h = 0; h < argc; h++)
	{
		for (i = 1; argv[h][i] != '\0'; i++)
		{
			if (isdigit(argv[h][i]))
			{
				sum += atoi(argv[i]);
			}
		else
		{
			sum = -1;
			break;
		}
	}
		if (sum == -1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", sum);
		}
	}
	return (0);
}
