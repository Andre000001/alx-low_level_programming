#include "main.h"

/**
 * string_toupper - Convert all lowercase letters in a string to uppercase.
 * @str: The string to be converted.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
