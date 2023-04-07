#include "main.h"
#include <stdlib.h>
/**
 * main - check the code
 *@argc: length of string
 *@argv: array of string
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, prod = 1;

	for (i = 1; i < argc; i++)
	{
		prod *= atoi(argv[i]);
	}
	if (argc == 3)
	{
		printf("%d\n", prod);
		return (0);
	}
	printf("Error\n");
	return (1);
}
