#include "lists.h"

/**
 * insert_nodeint_at_index - puts a node at listint_t list in a specific place
 * @head: points to the location of head of listint_t list.
 * @idx: The index of the listint_t list at the place where the new node should be inserted - indices begins from 0.
 * @n: The integer that the new node should  have
 *
 * Return: return - NULL if the function fails, else  - the location of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *copy, *new = *head;
	unsigned int temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (temp = 0; temp < (idx - 1); temp++)
	{
		if (copy == 0 || copy->next == 0)
			return (0);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
