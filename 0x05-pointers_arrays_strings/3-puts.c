#include "main.h"
/**
 * _puts - is a function that used to put string
 * @str: is the string parameter
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}


