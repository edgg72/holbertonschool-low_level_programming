#include "holberton.h"


/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * Return: pointer to the byte s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{

  int i = 0;
  int j = 0;
  while (*(s + i) != '\0')
    {
      j = 0;
      while (*(accept + j) != '\0')
	{
	  if (*(s + i) == *(accept + j))
	    {
	      break;
	    }
	  j++;
	}
      if (*(s + i) == *(accept + j))                                                                                                                                                                                      {
	break;                                                                                                                                                                                                          }
      i++;
    }

  if (*(s + i) == *(accept + j))                                                                                                                                                                                      {
    return ((s + i));
     }
  else
    {
      return ('\0');
    }


}
