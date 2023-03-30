#include "main.h"
/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 *
 * Return: 0 if buffer too small to store result, else return pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0, i, j;
    int len1 = 0, len2 = 0, sum = 0;

    while (n1[len1])
        len1++;
    while (n2[len2])
        len2++;
    if (len1 > size_r || len2 > size_r)
        return (0);

    r[size_r - 1] = '\0';
    i = len1 - 1;
    j = len2 - 1;
    size_r--;

    while (i >= 0 || j >= 0)
    {
        sum = carry + (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0);
        carry = sum / 10;
        r[size_r - 1] = (sum % 10) + '0';
        size_r--;
        i--;
        j--;
    }

    if (carry)
    {
        if (size_r == 0)
            return (0);
        r[size_r - 1] = carry + '0';
        size_r--;
    }

    if (size_r == 0 || (r[0] == '0' && r[1] != '\0'))
        return (0);

    return (r + size_r);
}
