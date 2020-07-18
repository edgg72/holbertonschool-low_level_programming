#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  prints strings, followed by a new line
 * @separator: separator between strings
 * @n: number of strings
 * Return:  nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list valist;
	unsigned int i;
	char *s;


	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(valist, char *);
		if(s)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator)
		{
			printf("%s", separator);		  
		}
	}

	printf("\n");

	va_end(valist);
}
