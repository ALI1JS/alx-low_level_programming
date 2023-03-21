#include "main.h"
/**
 * _islower - is  a function used to check
 * Description: this is a function used to check if the alphe is  lower or not
 * @c:is the charachter that checked
 * Return: 1 or 0
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
