#include "lists.h"

/**
 * print_listint -function that  prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t total = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		total += 1;
		ptr = ptr->next;
	}
	return (total);
}
