#include<stdio.h>
/**
*main - print 00 to 99
*Return: returning an int
*/
int main(void)
{
int i;
for(i = 0; i < 100 ; i++){
putchar((i/10)+'0');
putchar((i%10)+'0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
