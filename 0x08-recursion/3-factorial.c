#include "main.h"
/**
 * factorial - returns the factorial of a number
 * Return: factorial of number
 * @n: number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	factorial(0) = 1;
	return (n * factorial(n - 1));
}
