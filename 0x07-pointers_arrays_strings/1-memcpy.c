#include "main.h"

/**
 * _memcpy- is a function to copy value from location to another
 * @dest:first parameter
 * @src:second parameter
 * @n:third paramater
 * Return:dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int itr;
for (itr = 0; itr < n; itr++)
{
dest[itr] = src[itr];
}
return (dest);
}
