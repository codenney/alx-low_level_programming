#include "function_pointers.h"

/**
 * int_index - Function entry
 * Description: A function that searches for an integer
 * @array: An array integer
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element
 * ...for which the cmp function does not return 0
 * ...If no element matches, return -1
 * ...If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, value;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		value = *(array + i);
		if (cmp(value))
			return (i);
		i++;
	}
	return (-1);
}
