#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: separator between numbers
 * @n: number of numbers
 * Return:  nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
	if (separator != NULL)
	{
		if (i == (n - 1))
		{
		printf("%d", va_arg(valist, int));
		}
		else
		{
		printf("%d%s", va_arg(valist, int), separator);
		}
	}
	else
	{
		printf("%d", va_arg(valist, int));
	}
	}

	printf("\n");

	va_end(valist);


}
