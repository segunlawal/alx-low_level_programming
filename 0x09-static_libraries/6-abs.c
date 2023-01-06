#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * Return: Absolute value of integer
 * @num: integer to be computeid
 */

int _abs(int num)
{
	if (num < 0)
	{
		num *= -1;
	}
	return (num);
}
