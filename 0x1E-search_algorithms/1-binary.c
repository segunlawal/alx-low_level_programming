#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array of integers
 * @size: size of the array
 * @value: value to be searched
 * Return: first index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t begin, end, mid;
	int mid_val;

	begin = 0;
	end = size - 1;

	if (!array)
		return (-1);

	while (begin <= end)
	{
		print_array(array, begin, end);
		mid = begin + (end - begin) / 2;
		mid_val = array[mid];

		if (mid_val < value)
			begin = mid + 1;
		else if (mid_val > value)
			end = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * print_array - print an array
 * @array: array to be printed
 * @begin: first index to be printed
 * @end: last index to be printed
 * Return: Nothing
 */

void print_array(int *array, size_t begin, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = begin; i < end + 1; i++)
	{
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}
