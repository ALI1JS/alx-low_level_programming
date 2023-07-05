#include "main.h"

/**
 * _print_rev_recursion - is a function to print a string in reverse
 * @s : is a paramter for this function
 * Return : void
 */


void _print_rev_recursion(char *s)
{
if (*s == '0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
