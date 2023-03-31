#include "main.h"
/**
 * string_toupper- function to convert string from lowercase to uppercase
 * @str:is the string that converted
 * Return:str
 */

char *string_toupper(char *str)
{
int i;
i = 0;
while (str[i++] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
return (str);
}
