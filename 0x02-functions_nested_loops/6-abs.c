#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * Return: Absolute value of integer
 * @int: integer to be computed
 */

int _abs(int)
{
	int num;

	if (num < 0)
	{
		num *= -1;
	}
	return (num);
}
