#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds and prints the largest prime factor of a number.
 * @n: The number to find the largest prime factor of.
 */
void largest_prime_factor(long n)
{
	long largest = -1;
	/* Divide n by 2 until it's odd */
	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}
	/* Check for odd prime factors starting from 3 */
	for (long i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	/* If n is still greater than 2, it is a prime number */
	if (n > 2)
	{
		largest = n;
	}

	printf("%ld\n", largest);
}
int main(void)
{
	long number = 612852475143;
	largest_prime_factor(number);
	return (0);
}
