#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base ten
 * starting from zero
 * dg: single digit
 *
 * Return: success
 */

int main(void)
{
int dg;
for (dg = 48; dg < 58; dg++)
{
putchar(dg);
}
putchar('\n');
return (0);
}
