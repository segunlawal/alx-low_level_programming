#include <stdio.h>
/**
 * main - Prints all single digit numbers starting from 0 and then, a new line
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar("/n");

	return (0);
}
