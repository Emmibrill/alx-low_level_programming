#include "main.h"

/** rev_string - function that reverses a string.
 *
 * @s: pointer to the string variable
 *
 * Return: always success
 */

void rev_string(char *s)
{

char ctnr;
int i, length_one, length;

length_one = 0;
length = 0;

while (s[lengh] != '\0')
{
length++;
}

length_one = lengh - 1;
for (i = 0; i < lenth / 2; i++)

{

ctnr = s[i];
s[i] = s[length_one];
s[lengh_one--] = ctnr;

}
