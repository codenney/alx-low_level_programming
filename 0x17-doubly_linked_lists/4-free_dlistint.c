#include "lists.h"
/**
 * free_dlistint - Function entry
 * Description: A function that frees a dlistint_t list
 * @head: A pointer to the head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
	{
		return;
	}

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}

	free(head);
}
