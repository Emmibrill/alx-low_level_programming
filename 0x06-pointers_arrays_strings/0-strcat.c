#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: string to append to
 * @src: string to add
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i]; i++)
	{
		des[j++] = src[i];
	}

return (dest);
}
