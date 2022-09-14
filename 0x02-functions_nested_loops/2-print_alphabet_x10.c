#include "main.h"

/**
 * print_alphabet_x10 -  prints ten times the alphabet, in lowercase
 *
 * alp: alphabet
 * return true
 */

void print_alphabet_x10(void)
{
char alp;
int i;

for (i = 0; i < 10; i++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
