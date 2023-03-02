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
	int counter = 0;
	int temp;

	while (counter < n / 2)
	{
		temp = a[counter];
		a[counter] = a[n - counter - 1];
		a[n - counter - 1] = temp;
		counter++;
	}
}
