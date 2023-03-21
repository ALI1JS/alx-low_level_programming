#include "main.h"
/**
 * print_last_digit - is function for find the last digit
 * @n: is a parameter for tjis function
 * Return:d
 */
int print_last_digit(int n)
{
int d = n % 10;
if (d < 0)
{
d *= -1;
}
_putchar(d + '0');
return (d);
}
