#include "lists.h"

/**
 * free_listint - empties  listint_t list
 * @head: points to the head of the listint_t list that will be left
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
