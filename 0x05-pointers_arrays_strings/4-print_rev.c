#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The input string.
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the characters in reverse order */
	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	/* Print a new line character to move to the next line */
	_putchar('\n');
}
