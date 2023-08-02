#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t list 
 * @head:  points to the head of the listint_t list.
 *
 * Return: number of nodes there in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t boc, ind = 0;

	boc = looped_listint_len(head);

	if (boc == 0)
	{
		for (; head != NULL; boc++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ind = 0; ind < boc; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (boc);
}
