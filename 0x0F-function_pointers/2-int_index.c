#include "function_pointers.h"

/**
 * int_index - function entry
 * Description: A function that searches for an integer
 * where size is the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * @size: size of the array
 * @array: address of the array
 * Return: the index of the first element for which the cmp function
 * ...does not return 0
 * if no element matches, return -1
 * size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, seen;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		seen = cmp(array[i]);
		if (seen != 0)
			return (i);
	}

	return (-1);
}
