#include "main.h"

/**
 * main - program that prints the numbers from 1 to 100, 
 * followed by a new line. But for multiples of three print
 * Fizz instead of the number and for the multiples
 * of five print Buzz.
 * Return: always success (0)
 */

int main(void)
{

int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
_putchar("Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
_putchar("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
_putchar("FizzBuzz");
}
else if (i == 1)
{
_putchar("%d", i);
}
else
{
_putchar("%d", i);
}
}
_putchar("\n");
return (0);
}
