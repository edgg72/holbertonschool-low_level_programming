#include<stdio.h>

/**
*main - printing combinations of two digits
*Return: returning an int
*/

int main(void)
{
  
  int i, j, k;

  for (i = 48; i < 57; i++)
  {
    j = i + 1;

    while (j < 58)
    {
      k = j + 1;

      while (k < 58)
      {

        putchar (i);
        putchar (j);
        putchar (k);
        if (i == 55)
        {
          break;
        }
        
        putchar (',');
        putchar (' ');
        k++;
      }
      j++;
    }
  }

  putchar('\n');
  return (0);
}
