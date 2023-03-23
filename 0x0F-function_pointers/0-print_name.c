#include "function_pointers.h"

/**
 * print_name - function entry
 * Description: A function that prints a name
 * @name: the function parameter
 * @f: the function
 * Return: nothing!
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
