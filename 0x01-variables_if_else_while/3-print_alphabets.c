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

char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}

for (alpha = 'A'; alpha <='Z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}

