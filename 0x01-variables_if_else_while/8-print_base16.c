#include<stdio.h>

/**
*main - print 00 to 99
*Return: returning an int
*/

int main(void)
{
  
  long num;
  char a;

  for (num = 48; num < 58; num++)
  {
    putchar(num);
  }

  for (a = 'a'; a < 'g'; ++a)
  {
    putchar(a);
  }

  putchar('\n');
  return (0);
}
