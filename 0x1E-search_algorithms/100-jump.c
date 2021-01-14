#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to search
 * Return: index or -1
*/

int jump_search(int *array, size_t size, int value)
{
	int left = 0;
	int final = size - 1;
	int right = sqrt(size);
	int m, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= final)
	{
		m = left + right;
		if (m > final)
			m = final;

		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		if (value == array[left])
			return (left);
		else if (value <= array[m] || final == m)
		{
			printf("Value found between indexes [%d] and [%d]\n", left, left + right);
			for (i = left; i <= m; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
			return (-1);
		}

		left += m;
	}
	return (-1);
}
