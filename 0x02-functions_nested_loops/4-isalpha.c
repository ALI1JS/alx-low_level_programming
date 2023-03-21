#include "main.h"
/**
 * _isalpha - is a function for chek
 * Descrption: this function used to check if the parmeter is alphabet or no
 * @c: is the parameter for checking if it is alphabet or not
 * Return: 1 or 0
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
