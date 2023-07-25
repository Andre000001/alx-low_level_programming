#include "main.h"
#include <stdio.h>

int main(void)
{
    char *str1 = "Hello, world!";
    char *str2 = "0123456789";
    char *str3 = "I am testing _puts function.";

    // Test print_rev function
    printf("Reversed string: ");
    print_rev(str1);
    printf("\n");

    // Test puts2 function
    printf("Every other character: ");
    puts2(str2);
    printf("\n");

    // Test _puts function
    printf("Using _puts: ");
    _puts(str3);

    return (0);
}
