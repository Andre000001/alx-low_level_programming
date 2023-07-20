#include <stdio.h>

/**
 * print_fibonacci - prints the first n Fibonacci numbers
 * @n: the number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	int a = 1, b = 2, next;

	for (int i = 0; i < n; i++)
	{
		if (i <= 1)
		{
			next = i + 1;
		}
		else
		{
			next = a + b;
			a = b;
			b = next;
		}

		printf("%d", next);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	print_fibonacci(98);
	return (0);
}
