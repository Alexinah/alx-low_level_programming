#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the nuimber of elements in a list
 * @h: A pointer to the head of the listint_t list
 * Return: Number of elemnts in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
