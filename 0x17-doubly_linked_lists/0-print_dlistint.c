#include "lists.h"
/**
 * print_dlistint - Function entry
 * Description: A function that prints all the elements of a dlistint_t list
 * @h: address to the head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
