#include "lists.h"

/**
 * get_nodeint_at_index - finds  a  node made up of
 *                        a listint_t linked list.
 * @head: points to the head of listint_t list.
 * @index: the index of node that will locate - indices that starts from 0.
 *
 * Return:  NULL - for mark(node) if it doesn't exist
 *         else - the found mark (node).
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int mark;

	for (mark = 0; mark < index; mark++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
