#include "main.h"

/**
 * *_strncpy - function entry
 * Description: A function that copies a string
 * the function should work exactly like strncpy
 * @dest: the destination to add src to
 * @src: the source data to be added
 * @n: number of byte
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	while (src[counter] != '\0' && counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}

	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}

	return (dest);
}
