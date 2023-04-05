#include "lists.h"

/**
 * listint_len - function entry
 * Description: A function that returns the number of elements
 * in a linked listint_t list
 * @h: the address of the head node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
