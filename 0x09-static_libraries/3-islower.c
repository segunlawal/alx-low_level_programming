#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 1 if true, 0 otherwise
 * @c: character to be checked
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
