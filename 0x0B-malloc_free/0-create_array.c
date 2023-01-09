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
	char *str;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(sizeof(char) * size);
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (a = 0; a < size; a++)
				str[0] = c;
			arr[a + 1] = '\0';
			return (str);
		}
	}
}
