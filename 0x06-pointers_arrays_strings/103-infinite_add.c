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
	int carry = 0, sum, len1, len2, i;
    char *ptr1 = n1, *ptr2 = n2, *res_ptr = r + size_r - 1;
    
    // Calculate lengths of input strings
    for (len1 = 0; n1[len1]; len1++);
    for (len2 = 0; n2[len2]; len2++);
    
    // Iterate over the strings in reverse
    while (len1 || len2 || carry) {
        sum = carry;
        if (len1) {
            sum += ptr1[--len1] - '0';
            ptr1[len1] = sum % 10 + '0';
        }
        if (len2) {
            sum += ptr2[--len2] - '0';
            ptr2[len2] = sum % 10 + '0';
        }
        if (res_ptr == r) {
            return (0);
        }
        *--res_ptr = sum % 10 + '0';
        carry = sum / 10;
    }
    
    for (i = 0; r[i] == '0' && i < size_r - 1; i++);
    for (int j = 0; i < size_r; i++, j++) {
        if (r[i] == '\0') {
            r[j] = '\0';
            break;
        }
        r[j] = r[i];
    }
    return (r);
}
