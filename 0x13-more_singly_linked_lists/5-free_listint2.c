#include "lists.h"

/**
 * free_listint2 - Function entry
 * Description: A function that frees a listint_t list
 * @head: the node head address
 * The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	next = current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
