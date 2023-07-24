#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: Pointer to the input string.
 */
void puts2(char *str)
{
    int i = 0;

    /* Loop through the string */
    while (str[i] != '\0')
    {
        /* Print the character at the current index (even-indexed characters) */
        _putchar(str[i]);

        /* Move to the next even-indexed character */
        i += 2;
    }

    /* Print a new line after printing every other character */
    _putchar('\n');
}
