#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: the function accepts an input saved into s1
 * @s2: the function accepts an input saved into s2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
