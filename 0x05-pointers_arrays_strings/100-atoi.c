#include "main.h"
/**
 * _atoi - this function used to convert scan number from string and
 *  convert it ot integear
 *  @s:string to sacn it and convert number to inteager
 *  Return: this function return inteager
 */

int _atoi(char *s)
{
int i = 0;
int num = 0;
int sign = 1;
while (*(s + i) != '\0')
{
if (*(s + i) >= 48 && *(s + i) <= 57)
{
num = num * 10 + *(s + i) - 48;
}
if (*(s + i) == '-')
{
sign *= -1;
}
s++;
}
return (num *sign);
}
