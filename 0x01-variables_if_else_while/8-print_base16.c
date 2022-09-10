#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base ten
 * starting from zero
 * dg: single digit
 * aph: alphabet
 *
 * Return: success
 */

int main(void)
{
int dg;
char aph;
for (dg = 48; dg < 58; dg++)
{
putchar(dg);
}
for (aph = 'a'; aph <= 'f'; aph++)
{
putchar(aph);
}
putchar('\n');
return (0);
}
