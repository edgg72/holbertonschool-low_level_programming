#include <stdio.h>
/**
*main - check if n is positive or negative, or zero
*Return: returning an int
*/
int main(void)
{
int n = 1;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
