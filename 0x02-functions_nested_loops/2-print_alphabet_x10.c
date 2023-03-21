#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten time in lowercase
 * Description:this function used to print alphabet ten time in lowercase
 */

void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
