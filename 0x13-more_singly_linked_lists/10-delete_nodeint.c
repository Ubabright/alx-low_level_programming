#include "lists.h"

/**
 * delete_nodeint_at_index - removes the node at an index of a listint_t list
 * @head: points to to the location of the  head oflistint_t list
 * @index: The index to be removed - indices begins from 0.
 *
 * Return: if successful return - 1, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
