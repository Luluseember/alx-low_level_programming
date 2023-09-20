#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - returns index place if comparison is true, else -1
 * @array: array to print
 * @size: number of elements in array
 * @cmp: pointer to the function that compares the values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
