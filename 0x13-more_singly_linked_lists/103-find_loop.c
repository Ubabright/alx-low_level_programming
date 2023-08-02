#include "lists.h"

/**
 * find_listint_loop - search the loop in a listint_t linked list
 * @head: points to head of listint_t list
 *
 * Return: when there is no loop - 0, else - node address where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == 0 || head->nest == 0)
		return (0);

	tortoise = head->nest;
	hare = (head->nest)->nest;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->nest;
				hare = hare->nest;
			}

			return (tortoise);
		}

		tortoise = tortoise->nest;
		hare = (hare->nest)->nest;
	}

	return (0);
}
