#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * alpha: alphabet
 *
 * Return: success
 */

int main(void)
{

char alpha = 'a';

while (alpha <= 'z')
{
if (alpha != 'e' && alpha != 'q')
{
putchar(alpha);
}
alpha++;
}

putchar('\n');
return (0);
}
