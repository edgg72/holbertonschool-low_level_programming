#include "search_algos.h"

/**
* interpolation_search - interpolation_search algorithm
* @array: array to be searched
* @size: size of array
* @value: value to look for
* Return: index of value or -1 if failed
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t left, middle, right;

	if (array && size > 0)
	{
		left = 0;
		right = size - 1;
		while (array[left] != array[right])
		{
			middle = left + (((double)(right - left) /
(array[right] - array[left])) * (value - array[left]));
			if (middle < left || middle > right)
			{
				printf("Value checked array[%lu] is out of range\n", middle);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", middle, array[middle]);
			if (array[middle] < value)
				left = middle + 1;
			else if (array[middle] > value)
				right = middle - 1;
			else
				return (middle);
		}
	}
	return (-1);
}
