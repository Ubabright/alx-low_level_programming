#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t list
 *
 * @head: points to head of listint_t list.
 *
 * Return:return - 0 if the list is empty, else - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int addup = 0;

	while (head)
	{
		addup += head->n;
		head = head->next;
	}

	return (addup);
}
