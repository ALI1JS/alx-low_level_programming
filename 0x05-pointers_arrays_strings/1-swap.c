#include "main.h"

/**
 * swap_int - Is a function that swap two value by pointer.
 *@a: The first parameter in swap function
 *@b: The second parameter in swap function
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
