#include "main.h"

/**
 * _memset - Function Entry
 * Description: A function that fills memory with a constant byte
 * @s: starting address of memory
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
