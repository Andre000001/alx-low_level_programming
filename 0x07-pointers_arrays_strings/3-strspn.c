#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing accepted characters.
 *
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s)
	{
		match = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				match = 1;
				break;
			}
			accept++;
		}
		if (match)
			count++;
		else
			break;
		s++;
	}

	return (count);
}
