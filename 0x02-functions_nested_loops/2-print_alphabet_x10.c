#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in
 * lowercase, then, a new line
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	a = 'a';
	i = 1;

	while (i <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar("\n");
		i++;
		a = 'a';
	}
}
