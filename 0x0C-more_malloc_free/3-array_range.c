#include "main.h"

/**
 * array_range - Function entry
 * Description: A function that creates an array of integers
 * @min: the smallest value
 * @max: the highest value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *space = NULL;
	int i = 0;
	int size = (max - min) + 1;

	if (min > max)
		return (NULL);
	
	space = (int *)malloc(sizeof(int) * size);

	if (space == NULL)
		return (NULL);
	
	while (i <= size)
	{
		space[i] = min;
		min++;
		i++;
	}

	return (space);
}
