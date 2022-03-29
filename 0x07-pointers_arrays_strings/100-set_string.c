#include "main.h"

/**
 * set_string - Function entry
 * Description: A function that sets the value of a pointer to a char
 * @s: the value of the pointer pointer
 * @to: the address of the pointer
 * Return: See nothing!
 */
void set_string(char **s, char *to)
{
	*s = to;
}
