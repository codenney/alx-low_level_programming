#include "function_pointers.h"

/**
 * print_name - Function entry
 * Description: A function that prints a name
 * @name: base address of a string
 * @f: A function pointer
 * Return: See nothing!
 */

void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;
	(*f)(name);
}
