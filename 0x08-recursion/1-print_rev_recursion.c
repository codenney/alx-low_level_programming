#include "main.h"

/**
 * _print_rev_recursion - Function entry
 * Description: A function that prints a string in reverse
 * @s: Variable that holds the string base address
 * Return: See nothing!
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(&s[1]);
	}
	else
	{
		return;
	}

	_putchar(*s);
}
