#include "lists.h"

/**
 * add_dnodeint_end - Adds node at the end of a list
 * @head: head of a list
 * @n: Integer pointing to the new node
 *
 * Return: Address of the new element or NULL if failed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *last;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = newnode;
	newnode->prev = last;
	return (newnode);
}
