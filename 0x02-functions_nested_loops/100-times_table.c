#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of times table to print (up to 15).
 *
 * Return: void.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i;
	int j;
	int result;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
				_putchar('0');
			else
				_putchar(',');

			if (result < 10)
				_putchar(' ');

			if (result < 100)
				_putchar(' ');

			if (result >= 100)
			{
				_putchar(result / 100 + '0');
				_putchar((result / 10) % 10 + '0');
			}
			else if (result >= 10)
			{
				_putchar(result / 10 + '0');
			}

			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
