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
	int c_val[] = {25, 10, 5, 2, 1};
	int i, num = atoi(argv[1]), counter = 0;

	if (argc == 2)
	{
		if (*argv[1] < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			for (i = 0; i < 5;)
			{
				if (num >= c_val[i])
				{
					num -= c_val[i];
					counter++;
				}
				else
				{
					i++;
				}
			}
			printf("%d\n", counter);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
