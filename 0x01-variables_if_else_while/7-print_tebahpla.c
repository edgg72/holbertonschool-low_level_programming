#include<stdio.h>

/**
*main - print alphabet in reverse
*Return: returning an int
*/

int main(void)
{
  
  char c;
  
  for (c = 'z'; c >= 'a'; --c)
  {
    putchar(c);
  }

  putchar('\n');
  return (0);
}
