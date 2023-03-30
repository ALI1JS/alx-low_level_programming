#include "main.h"

/**
 * _strncat- is afunction to concatinate spesefic number of string
 * @dest:first parameter
 * @src:second parameter
 * @n:third parameter
 * Return:dest
 */


char *_strncat(char *dest, char *src, int n)
{
int i, j, c, t;
i = 0;
j = 0;
while (*(dest + i) != '\0')
{
i++;
}
while (*(src + j) != '\0')
{
j++;
}
c = 0;
if (n >= j)
{
while (*(src + c) != '\0')
{
*(dest + i) = *(src + c);
i++;
c++;
}
}

else
{
for (t = 0; t < n; t++)
{
*(dest + i) = *(src + t);
i++;
}
}

return (dest);

}
