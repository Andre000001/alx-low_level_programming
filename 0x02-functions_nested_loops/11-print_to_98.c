#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int i;
	/* Determine the step direction (increase or decrease) to reach 98 */
	int step = (n <= 98) ? 1 : -1;

	/* Loop from n to 98 (inclusive) with the appropriate step */
	for (i = n; (step > 0) ? i <= 98 : i >= 98; i += step)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}

	printf("\n");
}
