#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: If the result can be stored in `r`, return `r`, else return `0`
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, carry = 0, len1 = 0, len2 = 0, max_len;
	char *temp;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	max_len = (len1 > len2) ? len1 : len2;

	if (max_len + 1 > size_r)
		return (0);

	n1 += len1 - 1;
	n2 += len2 - 1;

	temp = r + max_len + 1;
	*temp = '\0';

	for (i = max_len; i >= 0; i--)
	{
		int sum = carry;

		if (len1 > 0)
		{
			sum += (*n1 - '0');
			n1--;
			len1--;
		}

		if (len2 > 0)
		{
			sum += (*n2 - '0');
			n2--;
			len2--;
		}

		carry = sum / 10;
		*temp = (sum % 10) + '0';
		temp--;
	}

	if (*temp == '0')
		temp++;

	return (temp);
}
