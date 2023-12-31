#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The times table to print
 *
 * Description: This function prints the n times table starting from 0.
 * If n is less than 0 or greater than 15, it does not print anything.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
				else if (result >= 10 && result < 100)
					_putchar(' ');

				if (result >= 100)
					_putchar((result / 100) + '0');

				if (result >= 10)
					_putchar(((result / 10) % 10) + '0');

				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
