#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times _ should be printed
 *
 * Return: nothing
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
