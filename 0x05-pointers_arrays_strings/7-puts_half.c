#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the input string.
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start_index;

	/* Find the length of the input string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Calculate the starting index for the second half */
	start_index = (length + 1) / 2;

	/* Print the second half of the string */
	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	/* Print a new line after printing the second half of the string */
	_putchar('\n');
}
