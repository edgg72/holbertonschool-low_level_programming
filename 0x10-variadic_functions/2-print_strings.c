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



	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			if (i == (n - 1))
			{
				printf("%s", va_arg(valist, char*));
			}
			else
			{
				printf("%s%s", va_arg(valist, char*), separator);
			}
		}
		else
		{
			printf("%s", va_arg(valist, char*));
		}
	}

	printf("\n");

	va_end(valist);
}
