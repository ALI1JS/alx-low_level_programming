#include "main.h"
/**
 * _strcpy - is a function used to copy string from variable to another by poi
 * @dest: is the destion parametre for string
 * @src: is the source parameter for string
 * Return: this function return also pointer
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
