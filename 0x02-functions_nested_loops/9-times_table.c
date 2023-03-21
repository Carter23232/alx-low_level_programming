#include "main.h"

/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
	int x_val, y_val, result, result_ldig, result_fdig;

	for (x_val = 0; x_val <= 9; x_val++)
	{
		for (y_val = 0; y_val <= 9; y_val++)
		{
			result = x_val * y_val;

			if (result > 9)
			{
				result_ldig = result % 10;
				result_fdig = (result - result_ldig) / 10;

				_putchar(',');
				_putchar(' ');
				_putchar(result_fdig + '0');
				_putchar(result_ldig + '0');
			}
			else
			{
				if (y_val != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				_putchar(result + '0');
			}
		}

		_putchar('\n');
	}
}

