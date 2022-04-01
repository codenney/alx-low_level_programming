#include "main.h"

/**
 * _memcpy - Function entry
 * Description: A function that copies memory area
 * @dest: location to copy value to
 * @src: location to copy value from
 * @n: number of bytes to be replaced
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
