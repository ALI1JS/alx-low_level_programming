#include "main.h"

/**
 * _strspn - is a function
 * @s: first parameter
 * @accept:second paramtere
 * Return:itr
 *
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int itr, jtr;
for (itr = 0; s[itr] != '\0'; itr++)
{
for (jtr = 0; accept[jtr] != s[itr]; jtr++)
{
if (accept[jtr] == '\0')
{
return (itr);
}
}
}
return (itr);
}
