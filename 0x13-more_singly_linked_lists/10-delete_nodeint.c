#include "lists.h"

/**
 * delete_nodeint_at_index - removes the node at an index of a listint_t list
 * @head: points to to the location of the  head oflistint_t list
 * @index: The index to be removed - indices begins from 0.
 *
 * Return: if successful return - 1, else -1
 * 
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *toop = *head;
	unsigned int node;

	if (toop == 0)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(toop);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (toop->next == 0)
			return (-1);

		toop = toop->next;
	}

	temp = toop->next;
	toop->next = temp->next;
	free(temp);
	return (1);
}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
"10-delete_nodeint.c" [New File]                                                    0,0-1         All
