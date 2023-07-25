#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 32

/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1]; /* Add 1 for the null terminator */
	int i, random_num;

	/* Seed the random number generator using the current time */
	srand(time(0));

	/* Generate random characters for the password */
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		random_num = rand() % 62; /* 26 lowercase letters + 26 uppercase letters + 10 digits */

		if (random_num < 26) /* Generate lowercase letter */
			password[i] = 'a' + random_num;
		else if (random_num < 52) /* Generate uppercase letter */
			password[i] = 'A' + (random_num - 26);
		else /* Generate digit */
			password[i] = '0' + (random_num - 52);
	}

	password[PASSWORD_LENGTH] = '\0'; /* Add the null terminator */

	/* Print the generated password */
	printf("%s\n", password);

	return (0);
}
