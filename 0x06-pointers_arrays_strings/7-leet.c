#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: string to be encoded
 *
 * Return: resulting string
 */
char *leet(char *)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\n'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
