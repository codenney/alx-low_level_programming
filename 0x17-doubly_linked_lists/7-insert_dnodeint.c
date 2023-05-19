#include "lists.h"

/**
 * *insert_dnodeint_at_index - function entry
 * Description: A function that inserts a new node at a given position
 * @n: value to be added to the node
 * @idx: index of the list where the new node should be added.
 * @h: address of the linked list
 * Index starts at 0
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i = 0;

	temp = *h;
	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (!newnode || !h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp && i <= idx)
	{
		if (i == idx - 1)
		{
			newnode->prev = temp;
			newnode->next = temp->next;
			temp->next = newnode;
			newnode->next->prev = newnode;
			return (newnode);
		}
		temp = temp->next;
		if (temp == NULL)
			return (add_dnodeint_end(h, n));
		i++;
	}

	return (newnode);
}
