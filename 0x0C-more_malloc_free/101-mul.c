#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string is composed only of digits
 * @s: the string to check
 *
 * Return: 1 if the string is composed only of digits, 0 otherwise
 */
int is_digit(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
        int len = 0;

        while (s[len] != '\0')
                len++;
        return (len);
}

/**
 * _puts - prints a string to stdout
 * @str: the string to print
 */
void _puts(char *str)
{
        while (*str != '\0')
        {
                putchar(*str);
                str++;
        }
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 */
void mul(char *num1, char *num2)
{
        int len1 = _strlen(num1);
        int len2 = _strlen(num2);
        int i, j, prod, carry;
        int *result;

        result = calloc(len1 + len2, sizeof(int));
        if (result == NULL)
        {
                _puts("Error\n");
                exit(98);
        }
        for (i = len1 - 1; i >= 0; i--)
        {
                carry = 0;
                for (j = len2 - 1; j >= 0; j--)
                {
                        prod = (num1[i] - '0') * (num2[j] - '0') +
                               result[i + j + 1] + carry;
                        carry = prod / 10;
                        result[i + j + 1] = prod % 10;
                }
                result[i + j + 1] += carry;
        }
        i = 0;
        while (i < len1 + len2 - 1 && result[i] == 0)
                i++;
        while (i < len1 + len2)
        {
                putchar(result[i] + '0');
                i++;
        }
        putchar('\n');
        free(result);
}

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
        if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
        {
                _puts("Error\n");
                return (98);
        }
        mul(argv[1], argv[2]);
        return (0);
}
