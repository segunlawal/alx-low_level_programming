#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string to be checked
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
