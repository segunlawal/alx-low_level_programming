#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name
 * @f: function that prints name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
