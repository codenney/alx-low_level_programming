#include "variadic_functions.h"

/**
 * sum_them_all - Function entry
 * Description: A function that returns the sum of all its parameters
 * @n: number of arguments
 * @...: list of arguments
 * Return: Sum of the parameters
 * ...if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list myarg;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(myarg, n);

	while (i < n)
	{
		sum += va_arg(myarg, int);
		i++;
	}

	va_end(myarg);
	return (sum);
}
