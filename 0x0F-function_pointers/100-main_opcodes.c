#include <stdio.h>
#include <stdlib.h>

/**
 * main - function with two arguments
 * @argc: int type argument count
 * @argv: char type argument array
 *
 * Description: print opcode
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 2) {
		printf("Error\n");
		return 1;
	}

	int num_bytes = atoi(argv[1]);
	if (num_bytes < 0) {
		printf("Error\n");
		return 2;
	}

	for (i = 0; i < num_bytes; i++) {
		printf("%02x%c", *((unsigned char *)main + i), i == num_bytes - 1 ? '\n' : ' ');
	}

	return 0;
}
