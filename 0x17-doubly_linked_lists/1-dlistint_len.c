#include "lists.h"

/**
 * dlistint_len - prints number of elemnts in a linked list
 * @h: head of the list
 *
 * Return: The number of elemnts in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
