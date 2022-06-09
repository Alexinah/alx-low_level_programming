#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: points to the head of a list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
