#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - prints chars
 * @c: char to print
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints strings
 * @s: string to print
 *
 * Return: void
 */
void print_s(va_list s)
{
	char *s = va_arg(s, char *);

	if (s == NULL)
	{
		s = "(nil)";
	}

	printf("%s", s);
}

/**
 * print_i - prints ints
 * @i: int to print
 *
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints floats
 * @f: float to print
 *
 * Return: void
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: arguments to print
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{

	unsigned int i, j;
	print_type pt[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
		};

	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (pt[j].t != NULL)
		{
			if (*(pt[j].t) == format[i])
			{
				printf("%s", separator);
				pt[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(valist);
	printf("\n");
}
