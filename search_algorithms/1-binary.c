#include "search_algos.h"

/**
 * binary_search - searches an array for a value using the binary search algo
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, mid = 0;

	if (!array || !size)
		return (-1);

	mid = size / 2;

	if (value == array[mid])
		return (mid);
	else if (value < array[mid])
	{

	}
	else if (value > array[mid])
	{

	}
}