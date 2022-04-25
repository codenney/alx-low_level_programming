#include "lists.h"

/**
 * listint_len - Function entry
 * Description: A function that returns the number of elements
 * in a linked listint_t list
 * @h: address of the head node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
