#include "main.h"

/**
 * _strcmp- Is a function used to compare tow string
 * @s1:First parameter
 * @s2:second paramter
 * Return:int
 */


int _strcmp(char *s1, char *s2)
{
int i, j, r;
i = 0;
j = 0;
while (*(s1++) != '\0')
{
i++;
}
while (*(s2++) != '\0')
{
j++;
}

if (i < j)
{
r = -15;
}
else if (i > j)
{
r = 15;
}
else
{
r = 0;
}
return (r);
}
