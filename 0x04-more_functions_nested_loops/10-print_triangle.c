#include "main.h"

/* Prototype for the _putchar function */
int _putchar(char c);

/**
 * print_triangle - Prints a triangle of a specified size.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int i = 1; i <= size; i++)
	{
		for (int j = size; j > i; j--)
		{
			_putchar(' ');
		}
		for (int k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
