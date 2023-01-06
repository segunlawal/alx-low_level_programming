#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * Return: 1 if c is a letter, 0 otherwise
 * @c: character to be checked
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
