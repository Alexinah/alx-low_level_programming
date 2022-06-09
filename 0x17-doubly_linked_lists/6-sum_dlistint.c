#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data
 * @head: head of a list
 * Return: Sum of all the data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
