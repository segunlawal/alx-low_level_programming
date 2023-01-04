#include "main.h"
/**
 * _isdigit - checks for digit
 * Return: 1 if digit and 0 otherwise
 * @c: integer to be checked
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
