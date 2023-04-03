#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - ...
 * @b: The ..
 * @size: The second number
 */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				printf("%02x", b[j]);
			}
			else
			{
				printf("  ");
			}
			if (((j + 1) % 2) == 0)
			{
				printf(" ");
			}
		}
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (b[j] >= 32 && b[j] <= 126)
				{
					printf("%c", b[j]);
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
	if (size <= 0)
	{
		printf("\n");
	}
}
