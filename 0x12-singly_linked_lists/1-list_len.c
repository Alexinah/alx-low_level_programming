#include "lists.h"
/**
 * list_len - no of elemnts
 * @h: singly linked list
 * Return: no of elemnts
 */
size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
