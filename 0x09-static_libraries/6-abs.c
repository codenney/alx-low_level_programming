#include "main.h"

/**
 * _abs - Function entry
 * Description: A function that computes the absolute value of an integer
 * @a: The variable that holds the value to check
 * Return: The absolute value of the value of a
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
