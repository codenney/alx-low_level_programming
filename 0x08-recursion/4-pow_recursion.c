#include "main.h"
/**
 * _pow_recursion - Function entry
 * Description: A function that returns the value of x raised to the power of y
 * @x: holds the input for x
 * @y: holds the input for y
 * Return: the value of x raised to the power of y
 * ...return -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
