#include <stdio.h>
/**
*main - showing the alphabet
*Return: returning an int
*/
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; ++alpha)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
