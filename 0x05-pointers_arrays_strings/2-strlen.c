#include "main.h"

/**
 * _strlen - Is a function that return lenght of string
 * @s: string parameter
 * Return: Length odf string
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
