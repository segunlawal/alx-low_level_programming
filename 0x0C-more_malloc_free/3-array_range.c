#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: lowest integer
 * @max: highest
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr[];
	unsigned int i, len = 0;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		for (i = min; i <= max; i++)
		{
			len++;
		}

		arr = malloc(len * sizeof(int));

		if (arr == NULL)
		{
			return (NULL);
		}

		for (j = 0; j <= max; j++)
		{
			for (k = min; k <= max; k++)
			{
				arr[j] = k;
			}
			j++;
		}
		return (arr);
	}
}
