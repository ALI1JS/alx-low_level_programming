#include "main.h"
/**
 * rev_string - Is a function to reverse the string
 * @s: is a string
 */

void rev_string(char *s)
{
int len = 0;
int i;
while (*s != '\0')
{
len++;
s++;
}
s--;
for (i = len; i > 0; i--)
{
_putchar(*s);
}
_putchar('\n');
}
