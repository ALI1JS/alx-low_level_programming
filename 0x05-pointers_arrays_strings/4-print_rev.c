#include "main.h"
/**
 * print_rev - is a function that used to put string
 * @s: is the string parameter
 */
void print_rev(char *s)
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
s--;
}
_putchar('\n');
}


