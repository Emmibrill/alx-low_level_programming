#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program will assign a random number to the variable n
 * n: random number
 *
 * Return: always 0 (true)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
printf("Last digit of %i is %i", n, n % 10);
printf("and is greater than 5\n");
}

else if (n % 10 == 0)
{
printf("and is 0\n");
}

else if (n % 10 < 6 && n % 10 != 0);
{
printf("and is less than 6 and not 0\n");
}

return (0);
}
