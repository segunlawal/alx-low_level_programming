#include "main.h"
/**
 * main -  prints the alphabet, in lowercase,
 * followed by a new line
 * Return: Always 0
 */

void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
