#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 *
 * alp: alphabet
 * Return: always true
 */

void print_alphabet(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
