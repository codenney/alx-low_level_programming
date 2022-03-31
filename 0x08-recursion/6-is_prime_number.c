#include "main.h"

/**
* is_not_prime - Entry point
* Description - A function that checks for
* non-prime number and return 1
* *@n: the function accepts an input saved into n
* *@i: the function accepts a pointer saved into i
* Return: (0)
*/
int is_not_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_not_prime(n, i - 1));
	}
}

/**
 * is_prime_number - Function entry
 * Description: A function that checks if the input integer is a prime number
 * @n: input value of the integer
 * Return: 1 if the input integer
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (is_not_prime(n, n / 2) > 0)
	{
		return (1);
	}
	return (0);
}
