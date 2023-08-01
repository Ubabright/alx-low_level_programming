#include "lists.h"

/**
 * free_listint2 - allows listint_t list.
 * @head: points to the location of the
 *        head of listint_t list.
 *
 * Description: puts  head to NULL now
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == 0)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = 0;
}
