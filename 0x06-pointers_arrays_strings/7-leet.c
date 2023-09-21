#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *leet_dict = "aAeEoOtTlL";
	char *leet_code = "43071";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet_dict[j]; j++)
		{
			if (str[i] == leet_dict[j])
			{
				str[i] = leet_code[j / 2];
				break;
			}
		}
	}

	return (str);
}
