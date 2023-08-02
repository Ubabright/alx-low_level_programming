#include "lists.h"

/**
 * add_nodeint_end - Adds  new node to the end of a listint_t list.
 * @head: points  to the address of the head of the listint_t list.
 * @n: integer for the new node
 *
 * Return:  return - nothing if the function fails
 *         else - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh, *end;

	fresh = malloc(sizeof(listint_t));
	if (fresh == 0)
		return (0);

	fresh->n = n;
	fresh->next = 0;

	if (*head == 0)
		*head = fresh;

	else
	{
		end = *head;
		while (end->next != 0)
			end = end->next;
		end->next = fresh;
	}

	return (*head);
}
