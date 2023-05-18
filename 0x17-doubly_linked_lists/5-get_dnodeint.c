#include "lists.h"

/**
 * *get_dnodeint_at_index - function entry
 * Description: A function that returns the nth node of
 * a dlistint_t linked list
 * @head: the list address
 * @index: the index of the node, starting from 0
 * Return: the address of the node
 * if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (!temp)
		return (NULL);

	while (temp && i <= index)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}

	return (NULL);
}
