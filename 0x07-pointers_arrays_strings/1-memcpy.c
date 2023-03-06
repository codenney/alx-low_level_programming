#include "main.h"

/**
 * *_memcpy - function entry
 * Description: A function that copies memory area
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes
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
