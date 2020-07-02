#include "holberton.h"
/**
 * _len - length of string
 * @s: string
 *
 * Return: length
 */

int _len(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _len(s + 1));
}

/**
 * _palindrome - checks if string is palindrome
 * @i: left to right
 * @j: right to left
 * @p: possible palindrome
 *
 * Return: 1 if palindrome 0 if not
 */

int _palindrome(int i, int j, char *p)

{
if (i >= j)
return (1);
else if (p[i] != p[j])
return (0);
else
return (_palindrome(i + 1, j - 1, p));
}


/**
 * is_palindrome - says if string is palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
int i;
i = _len(s) - 1;
return (_palindrome(0, i, s));
}
