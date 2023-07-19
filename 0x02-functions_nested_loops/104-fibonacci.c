#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count, term1 = 1, term2 = 2, nextTerm;

	printf("%d, %d", term1, term2);

	for (count = 3; count <= 98; count++)
	{
		nextTerm = term1 + term2;
		printf(", %d", nextTerm);
		term1 = term2;
		term2 = nextTerm;
	}

	printf("\n");

	return (0);
}
