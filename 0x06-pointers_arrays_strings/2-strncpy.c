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
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
