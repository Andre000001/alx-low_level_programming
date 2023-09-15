#include "main.h" /* Include the main.h file to declare the add function prototype */
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9); /* Call the add function */
    printf("%d\n", n);
    return (0);
}
