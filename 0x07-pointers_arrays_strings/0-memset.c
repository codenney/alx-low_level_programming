#include "main.h"

/**
 * *_memset - function entry
 * Description: A function that fills memory with a constant byte
 * @s: memory area pointed to
 * @b: fill s with the constant byte b
 * @n: bytes of the memory
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (s[i] != '\0' || i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
