#include "lists.h"

/**
 * list_len - Function entry
 * Description: A function that returns the number of elements
 * ...in a linked list_t list
 * @h: address of a struct data type
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;


	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
