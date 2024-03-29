#include "main.h"
/**
 * get_bit - get value of a bit at given index
 * @n: number
 * @index: given index
 * Return: value of bit at given index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > 63)
		return (-1);
	num = (n >> index) & 1;
		return (num);
}
