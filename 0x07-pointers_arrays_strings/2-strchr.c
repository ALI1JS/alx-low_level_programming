#include "main.h"

/**
*_strchr - is a function to search on char
*@s:first charachter
*@c:second character
*Return:s
 */

char *_strchr(char *s, char c)
{
int itr;
for (itr = 0; s[itr] >= '\0'; itr++)
{
if (s[itr] == c)
{
return (s + itr);
}
}
return ('\0');
}
