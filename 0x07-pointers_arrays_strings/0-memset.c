#include "main.h"

/**
* _memset - is a function
* @s: frist parametre
* @b: second parameter
* @n:third prameter
* Return:s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int nu;
for (nu = 0; n > 0;nu++, n--)
{
s[nu] = b;
}
return (s);
}
