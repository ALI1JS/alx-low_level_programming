#include "main.h"
#include <stdio.h>
/**
 * print_array - is a function to print the second haif of string
 * @a: is an array
 * @n: is the nymber of element that printed
 */

void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i == n - 1)
{
printf("%d", *(a + i));
i++;
}
else
{
printf("%d, ", *(a + i));
i++;
}
}
printf("\n");
}
