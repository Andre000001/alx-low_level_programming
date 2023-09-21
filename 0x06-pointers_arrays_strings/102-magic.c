#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[5];

	a[2] = 1024;
	*(a + 2) = 98;
	/* your code goes here */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
