#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *curr_str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		curr_str = va_arg(args, char *);
		if (curr_str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", curr_str);
		}
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
