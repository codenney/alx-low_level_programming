#include "main.h"

/**
 * _strlen_recursion - Function entry
 * Description: A function that returns the length of a string
 * @s: Holds the string address
 * Return: returns the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}

	_putchar(*s);
}
