#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: function's arguement
 *
 * Return:  a
 */

int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
n *= -1;
}
last_digit = n % 10;

if (last_digit < 0)
{
last_digit *= -1;
}
_putchar(last_digit + '0');
return (0);
}
