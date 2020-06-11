#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
*main - get the last digit of a number
*Return: returning an int
*/
int main(void)
{
int n, ev;
srand(time(0));
n = rand() - RAND_MAX / 2;
ev = n;
while (ev >= 10)
{
ev = ev / 10;
}
if (ev > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, ev);
}
else if (ev == 0)
{
printf("Last digit of %d is %d and is 0", n, ev);
}
else if (ev < 6 && ev != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, ev);
}
return (0);
}
