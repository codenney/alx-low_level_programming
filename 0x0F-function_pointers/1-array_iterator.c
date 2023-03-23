#include "function_pointers.h"

/**
 * array_iterator - function entry
 * Description: A function that executes a function given
 * as a parameter on each element of an array.
 * @array: provided array
 * @size: size is the size of the array
 * @action: a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
