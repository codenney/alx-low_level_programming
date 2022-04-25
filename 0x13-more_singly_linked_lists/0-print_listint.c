#include "lists.h"

/**
 * print_listint - Function entry
 * Description: A function that prints all the elements of a listint_t list
 * @h: address of the head node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
