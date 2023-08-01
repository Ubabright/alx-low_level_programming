#include "lists.h"

/**
 * reverse_listint - reverse listint_t list
 * @head: points to location of head of list_t list
 *
 * Return: points to first node of the list reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *back;

	if (head == NULL || *head == NULL)
		return (NULL);

	back = NULL;

	while ((*head)->next != NULL)
	{
	        front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}

	(*head)->next = back;

	return (*head);
}
