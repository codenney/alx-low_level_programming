#include "lists.h"

/**
 * insert_nodeint_at_index - Function entry
 * Description: A function that inserts a new node at a given position
 * @head: a pointer to the head address
 * @idx: the index of the list where the new node should be added
 * @n: the value to be added in the new node
 * Return: the address of the new node or NULL if it failed
 * if it is not possible to add the new node at index idx
 * ...do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i = 1;

	unsigned int no_of_nodes = 0;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	temp = *head;
	printf("Did it get here?\n");
	while (temp != NULL)
	{
		temp = temp->next;
		no_of_nodes++;
	}
	printf("Printing the number of nodes = %d\n", no_of_nodes);

	if (idx > no_of_nodes)
		return (NULL);
	printf("What about here?\n");
	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	printf("Did it finish traversing??\n");
	newnode->next = temp->next;
	temp->next =  newnode;

	return (newnode);
}
