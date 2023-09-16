#include "main.h"

/**
 * print_square - prints a square of '#' characters
 * @size: the size of the square
 *
 * Description: This function prints a square of '#' characters in the terminal.
 * If the size is 0 or less, it prints only a newline character.
 */
void print_square(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
