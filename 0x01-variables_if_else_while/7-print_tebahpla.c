#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 * alpha: alphabet
 *
 * Return: success
 */
int main(void)
{

char alpha;

for (alpha = 'z'; alpha > 'a'; alpha--)
{
putchar(alpha);
}
putchar('\n');
return (0);
}

