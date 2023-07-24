#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the input string.
 */
void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char temp;

	/* Find the length of the input string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Reverse the string */
	start = 0;
	end = length - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
