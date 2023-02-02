#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(const char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * _pow - returns the value of x raised to the power of y
 * Return: value of x raised to the power of y
 * @x: base number
 * @y: exponent
 */

int _pow(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow(x, (y - 1)));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int a, len, i;
	unsigned int each_int;
	unsigned int total = 0;

	if (b == NULL)
		return (0);
	
	len = _strlen(b);
	for( a = 0; a < len; a++)
	{
		if ((b[a] != '0') && (b[a] != '1'))
			return (0);
	}

	for (i = len - 1; i >= 0; i--)
	{
		each_int = (b[len - i - 1] - '0') * (_pow(2, i));
		total += each_int;
	}
	return (total);

}
