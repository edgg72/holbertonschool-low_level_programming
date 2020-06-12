#include<stdio.h>
/**
*main - 0 to 9
*Return: returning an int
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{

putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
