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
for (dg = 48; dg <= 58; dg++)
{
for (dig = 49; dig <= 59; dig++)
{
if (dig > dg)
{
putchar(dg);
putchar(dig);
if (dg != 57 || dig != 58)
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
