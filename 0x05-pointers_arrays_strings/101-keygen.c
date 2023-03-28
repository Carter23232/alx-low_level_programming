#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TARGET_SUM 2772

/**
 * main - it all starts here
 *
 * Return: 0 always success
 */
int main(void)
{
	int current_sum = 0, num = 0, idx = 0;
	char result_str[100];

	srand(time(NULL));
	while (current_sum < TARGET_SUM)
	{
		if (TARGET_SUM - current_sum < 48)
			current_sum -= result_str[--idx];
		else if (TARGET_SUM - current_sum <= 126)
			num = TARGET_SUM - current_sum;
		else
			num = rand() % (126 - 48) + 48;
		if (num)
		{
			result_str[idx++] = num;
			current_sum += num;
		}
		num = 0;
	}
	result_str[idx] = '\0';
	printf("%s", result_str);
	return (0);
}
