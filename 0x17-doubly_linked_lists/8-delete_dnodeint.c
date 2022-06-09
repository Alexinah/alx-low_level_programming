#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint list
 *
 * @head: A pointer to the head of the dlistintint_t
 * @index: The index of the node to delete.
 *
 * Return: 1 for success and -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
