#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function entry
 * Description: A function that frees dogs
 * @d: The struct data type
 * Return: See nothing!
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d->name));
		free((*d->owner));
		free(d);
	}
}
