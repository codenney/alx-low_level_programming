#include "lists.h"

/**
 * add_node - Function entry
 * Description: A function that adds a new node at the end of a list_t list
 * @head: A pointer to the address of the head element
 * @str: String to duplicate
 * Return: address of the new element
 * ...NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;

	*head = newnode;

	return (*head);
}
