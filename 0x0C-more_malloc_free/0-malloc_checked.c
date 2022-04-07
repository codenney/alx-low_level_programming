#include "main.h"

/**
 * malloc_checked - Function entry
 * Description: A function that allocates memory using malloc
 * @b: The size of the malloc
 * Return: a void pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ourPointer = malloc(b);

	if (ourPointer == NULL)
		exit(98);

	return (ourPointer);

}
