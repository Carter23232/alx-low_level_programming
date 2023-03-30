/**
 * infinite_add - adds two integers stored as strings
 *
 * @n1: first integer string to add
 * @n2: second integer string to add
 * @r: array to store resulting string in
 * @size_r: size of array r
 *
 * Return: the summed string in r. If r is too small for the result,
 * return 0;
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, index = 0;
	char *s1 = n1 + strlen(n1) - 1, *s2 = n2 + strlen(n2) - 1;

	while (s1 >= n1 || s2 >= n2)
	{
		int sum = carry;

		if (s1 >= n1)
			sum += *s1-- - '0';
		if (s2 >= n2)
			sum += *s2-- - '0';
		r[index++] = sum % 10 + '0';
		carry = sum / 10;
		if (index == size_r && (s1 >= n1 || s2 >= n2 || carry > 0))
			return (0);
	}
	if (carry > 0)
	{
		if (index < size_r - 1)
			r[index++] = carry + '0';
		else
			return (0);
	}
	r[index] = '\0';
	for (int i = 0, j = index - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}

	return (r);
}
