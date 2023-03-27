#include "main.h"
/**
 *  positive _or_negative - is a function for check positive or negative number.
 *  Description - is a function for check positive or negative number.
 *  @param i  is a parameter to check if it is pos or nea or zero.
 */

void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive \n", i);

else if (i < 0)
printf("%d is negative \n", i);

else
printf("%d is zero\n", i);

}
