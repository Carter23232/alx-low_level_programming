#include "main.h"
/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 *
 * Return: 0 if buffer too small to store result, else r
 **/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0, index = 0;
    char *s1 = n1 + strlen(n1) - 1, *s2 = n2 + strlen(n2) - 1;

    while (s2 >= n2 && s1 >= n1) {
        r[index] = (*s2 - '0') + (*s1 - '0') + carry;
        carry = r[index] / 10;
        r[index] %= 10;
        s1--;
        s2--;
        index++;
        if (index == size_r) return NULL;
    }

    while (s1 >= n1) {
        r[index] = (*s1 - '0') + carry;
        carry = r[index] / 10;
        r[index] %= 10;
        s1--;
        index++;
        if (index == size_r) return NULL;
    }

    while (s2 >= n2) {
        r[index] = (*s2 - '0') + carry;
        carry = r[index] / 10;
        r[index] %= 10;
        s2--;
        index++;
        if (index == size_r) return NULL;
    }

    if (carry == 1) {
        if (index == size_r) return NULL;
        r[index] = 1;
        index++;
    }

    r[index] = '\0';

    for (int i = 0; i < index / 2; i++) {
        char tmp = r[i];
        r[i] = r[index - i - 1];
        r[index - i - 1] = tmp;
    }

    return r;
}

