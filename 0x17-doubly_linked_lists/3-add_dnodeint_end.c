#include "lists.h"
/**
 * add_dnodeint_end - Function entry
 * Description: A function that adds a new node at the end of a dlistint_t list
 * @head: A pointer to the head
 * @n: the value of the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *last;

	last = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	new->prev = last;

	return (new);
}
