#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - calculates the amount of important nodes in a looped listint_t linked list.
 * @head: points to the head of the listint_t 
 *
 * Return: return 0 if the list is not looped, else the number of important nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *boc, *haa;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	boc = head->next;
	haa = (head->next)->next;

	while (haa)
	{
		if (boc == haa)
		{
			boc = head;
			while (boc != haa)
			{
				nodes++;
				boc = boc->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (boc != haa)
			{
				nodes++;
				boc = boc->next;
			}

			return (nodes);
		}

		boc = boc->next;
		haa = (haa->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list 
 * @head:  points to the head of the listint_t list.
 *
 * Return: number of nodes there in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
