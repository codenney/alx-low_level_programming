#include "dog.h"

/**
 * *new_dog - function entry
 * Description: A function that creates a new dog
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 * Return: the address to the created object
 * NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->age = age;
	ptr->name = name;
	ptr->owner = owner;

	return (ptr);
}
