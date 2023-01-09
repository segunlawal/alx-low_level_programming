#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 * @size: size of array
 * @c: char initialized with
 * Return: pointer to the array, NULL i size is 0
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{	
		char *str;

		str = malloc(sizeof(char) * size);
		str[0] = c;
		return (str);
	}
}
