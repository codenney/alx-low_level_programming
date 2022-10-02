#include "lists.h"
/**
 * dlistint_len - Function entry
 * Description: A function that returns the number
 * of elements in a linked dlistint_t list
 * @h: address to the head node
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
