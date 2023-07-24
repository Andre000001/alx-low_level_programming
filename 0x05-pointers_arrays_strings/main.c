#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);      /* Print the original string */
    rev_string(s);          /* Call the function to reverse the string */
    printf("%s\n", s);      /* Print the reversed string */

    return (0);
}
