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
	size_t i = 0, leftLim = 0, rightLim = size - 1;
	bool split = true;

	if (!array || !size)
		return (-1);

	while (split && rightLim >= leftLim)
	{
		split = false;

		printf("Searching in array:");
		for (i = leftLim; i <= rightLim; i++)
		{
			if (i > leftLim)
				putchar(',');
			printf(" %d", array[i]);
		}
		putchar(10);

		i = leftLim + (rightLim - leftLim) / 2;
		if (value < array[i])
			rightLim = i - 1;
		else if (value > array[i])
			leftLim = i + 1;
		else
			return (i);
		split = true;
	}
	return (-1);
}
