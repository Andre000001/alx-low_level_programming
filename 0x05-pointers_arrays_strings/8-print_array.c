#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	/* Loop through the array elements */
	for (i = 0; i < n; i++)
	{
		/* Print the current element */
		printf("%d", a[i]);

		/* Print a comma and space after each element (except the last one) */
		if (i < n - 1)
			printf(", ");
	}

	/* Print a new line after printing the array */
	printf("\n");
}
