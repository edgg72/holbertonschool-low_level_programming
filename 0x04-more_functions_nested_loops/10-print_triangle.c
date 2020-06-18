#include "holberton.h"
/**
* print_triangle - prints a triangle 
* @size: size
* Return: void.
*/

void print_triangle(int size)
{
  if(size > 0)
    {
      int i, j, x;
      x = size;

      for (i = 0; i < size; i++)
	{
	  
	  for (j = 0; j < size; j++)
	    {
	      if (j < (x - 1))
		{
		  _putchar(' ');
		}
	      else if (j >= (x - 1))
		{
		  _putchar(35);
		}
	      
	   }
	  x--;
	 _putchar('\n');
	}
    }
  else
    {
     _putchar('\n');
    }
  
}
