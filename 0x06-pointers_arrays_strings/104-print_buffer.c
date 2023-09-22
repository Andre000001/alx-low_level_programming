#include <stdio.h>

/**
 * print_buffer - Prints a buffer as specified.
 * @b: The buffer to be printed.
 * @size: The number of bytes to print from the buffer.
 *
 * Description: This function prints the content of the buffer @b, showing 10
 * bytes per line. Each line starts with the position of the first byte of the
 * line in hexadecimal (8 chars), followed by the hexadecimal content (2 chars
 * per byte, separated by a space), and then the printable content of the
 * buffer. If a byte is not printable, it is represented as a dot '.'.
 * If @size is 0 or less, the output is a new line only.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (j % 2 == 0)
				printf(" ");

			if (i + j >= size)
				printf("  ");
			else
				printf("%02x", b[i + j]);
		}

		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
				break;

			if (b[i + j] >= 32 && b[i + j] <= 126)
				printf("%c", b[i + j]);
			else
				printf(".");
		}

		printf("\n");
	}
}
