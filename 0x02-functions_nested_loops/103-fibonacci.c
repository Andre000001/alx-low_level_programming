#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int term1 = 1;
	int term2 = 2;
	int nextTerm = 0;
	int sum = 0;

	while (term1 <= 4000000)
	{
		if (term1 % 2 == 0)
		{
			sum += term1;
		}

		nextTerm = term1 + term2;
		term1 = term2;
		term2 = nextTerm;
	}

	printf("Sum of even-valued terms: %d\n", sum);

	return (0);
}

