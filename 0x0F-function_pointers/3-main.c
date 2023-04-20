#include "3-calc.h"

/**
  * main - entry point to program
  * @argc: argument counter
  * @argv: arguments
  *
  * Return: 0 on success
  */

int main(int argc, char **argv)
{
	int (*fptr)(int, int);

	fptr = get_op_func(argv[2]);
	if (argc == 4)
	{
		if (fptr == 0)
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", fptr(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
