#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9
 *
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		_putchar(a + '0');
	_putchar('\n');
}
