#include "main.h"
/**
 * _strncpy - Is a function to copy strinf from memory location to another
 * @dest:Destion for copied string
 * @src:Source for copied string
 * @n:Is the number of charachter that copied
 * Return:dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int c, i;
i = 0;

while (*(src++) != '\0')
{
i++;
}

if (n >= i)
{
while (*(src++) != '\0')
{
*(dest++) = *(src++);
}
}
else
{
for (c = 0; c < n; c++)
{
*(dest + c) = *(src + c);
}
}
return (dest);
}
