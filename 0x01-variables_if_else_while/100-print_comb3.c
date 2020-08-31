#include<stdio.h>

/**
*main - printing combinations of two digits
*Return: returning an int
*/

int main(void)
{
  
  int i, j;

  for (i = 48; i < 57; i++)
  {
    j = i + 1;
    while (j < 58)
    {
      putchar (i);
      putchar (j);

      if (i != 56)
      {
        putchar(',');
        putchar(' ');
      }
      j++;
    }
  }

  putchar('\n');
  return (0);
}
