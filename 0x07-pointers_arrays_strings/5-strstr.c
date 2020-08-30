#include "holberton.h"


/**
 * _strstr -  locates a substring.
 * @haystack: initial string
 * @needle: subtring
 * Return: pointer with the first value of the matched substring
 */


char *_strstr(char *haystack, char *needle)
{
  unsigned int i = 0, j = 0;

  while (haystack[i])
  {
    while (needle[j] != '\0' && (haystack[i] == needle[0]))
    {
      if (haystack[i + j] == needle[j])
        j++;
      else
        break;
    }
    if (needle[j] != '\0')
    {
      i++;
      j = 0;
    }
    else
      return (haystack + i);
  }
  return (0);
}
