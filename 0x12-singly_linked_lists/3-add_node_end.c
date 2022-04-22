#include "lists.h"

/**
 * add_node_end - Function entry
 * Description: A function that adds a new node at the end of a list_t list
 * @head: A pointer to the address of the head element
 * @str: String to duplicate
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = temp = newnode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}

	return (*head);
}
