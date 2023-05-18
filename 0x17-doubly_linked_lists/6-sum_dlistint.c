#include "lists.h"

/**
 * sum_dlistint - function entry
 * Description: A function that returns the sum of all the
 * data (n) of a dlistint_t linked list
 * @head: address of the list
 * Return: the sum of all the data (n)
 * if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
