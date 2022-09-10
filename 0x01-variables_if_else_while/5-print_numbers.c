#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10. 
 * starting from 0.
 * dg: single digit
 *
 * Return: success
 */

int main(void)
{
int dg;
for (dg = 0; dg < 10; dg++)
{
putchar(dg);
}
putchar('\n');
return (0);
}
