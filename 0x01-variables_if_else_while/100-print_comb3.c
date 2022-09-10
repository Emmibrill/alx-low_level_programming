#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base ten
 * starting from zero
 *
 * Return: success
 */

int main(void)
{
int dg, dig;
for (dg = 48; dg <= 56; dg++)
{
for (dig = 49; dig <= 57; dig++)
{
if (dig > dg)
{
putchar(dg);
putchar(dig);
if (dg != 57 || dig != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
