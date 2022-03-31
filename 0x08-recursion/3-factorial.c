#include "main.h"

/**
 * factorial - Function entry
 * Description: A function that returns the factorial of a given number
 * @n: number to find it factoria
 * Return: the factorial of a given number
 * ...-1 to indicate an error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
