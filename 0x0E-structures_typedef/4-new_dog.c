#include "dog.h"
int _strlen(char *s);
/**
 * new_dog - Function entry
 * Description: A function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a pointer to the base location
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_len = 0, owner_len = 0, i = 0;

	my_dog = malloc(sizeof(*my_dog));

	if (my_dog == NULL || !(name) || age < 0 || !(owner))
	{
		free(my_dog);
		return (NULL);
	}

	(*my_dog).age = age;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	(*my_dog).name = malloc(name_len + 1);
	(*my_dog).owner = malloc(owner_len + 1);

	if ((*my_dog).name == NULL || (*my_dog).owner == NULL)
	{
		free(my_dog);
		free((*my_dog).name);
		free((*my_dog).owner);
		return (NULL);
	}

	while (i < name_len)
	{
		(*my_dog).name[i] = name[i];
		i++;
	}
	(*my_dog).name[i] = '\0';

	i = 0;

	while (i < owner_len)
	{
		(*my_dog).owner[i] = owner[i];
		i++;
	}
	(*my_dog).owner[i] = '\0';

	return (my_dog);
}


/**
 * _strlen - Entry point
 * Description - A function that returns the length of a string
 * *@s: the function accepts an input saved into s
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		length += 1;
		i++;
	}

	return (length);
}
