#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: how many times \ is printed
 * Return: Nothing
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('\');
			n--;
		}
	}
	_putchar('\n');
}
