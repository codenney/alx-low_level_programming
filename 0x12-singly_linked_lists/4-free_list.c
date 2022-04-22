#include "lists.h"

/**
 * free_list - Function entry
 * Description: A function that frees a list_t list
 * @head: A pointer to the address of the head element
 * Return: See nothing!
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
