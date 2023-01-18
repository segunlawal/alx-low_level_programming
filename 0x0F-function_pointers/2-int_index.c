#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && size != NULL && cmp != NULL)
	{
		int i;

		if (size <= 0)
		{
			return (-1);
		}
		else if
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
		return (-1);
		}
	}
}
