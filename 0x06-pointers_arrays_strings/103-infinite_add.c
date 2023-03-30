/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 *
 * Return: 0 if buffer too small to store result, else return pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int l1 = strlen(n1), l2 = strlen(n2);
    if (l1 + l2 + 1 > size_r) return 0;
    int carry = 0, i = 0;
    for (int j = l1 - 1, k = l2 - 1; j >= 0 || k >= 0 || carry; j--, k--, i++) {
        int a = j < 0 ? 0 : n1[j] - '0';
        int b = k < 0 ? 0 : n2[k] - '0';
        int sum = a + b + carry;
        r[i] = sum % 10 + '0';
        carry = sum / 10;
    }
    r[i] = '\0';
    for (int j = 0, k = i - 1; j < k; j++, k--) {
        char tmp = r[j];
        r[j] = r[k];
        r[k] = tmp;
    }
    return r;
}
