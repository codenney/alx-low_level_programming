#include <stdio.h>

/**
 * reverse_array - Function entry
 * Description: A function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: see nothing, return nothing!
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int holder;

	n = n - 1;

	while (i < n)
	{
		holder = a[i];
		a[i] = a[n];
		a[n] = holder;

		i++;
		n--;
	}
}
