#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the input string.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Find the length of the input string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print the string in reverse */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	/* Print a new line after reversing the string */
	_putchar('\n');
}
