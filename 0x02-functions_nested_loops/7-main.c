#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = print_last_digit(98);
	_putchar('0' + r);
	_putchar('\n');

	r = print_last_digit(0);
	_putchar('0' + r);
	_putchar('\n');

	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');

	r = print_last_digit(INT_MIN);
	_putchar('0' + r);
	_putchar('\n');

	return (0);
}
