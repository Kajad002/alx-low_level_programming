#include "main.h"
/**
 * main -  tests function that prints if integer is positive or negative
 * 0 : is the number to be checked
 * @i: print out
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
