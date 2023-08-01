#include "lists.h"
#include <stdio.h>

/**
 * print_listint -function that  prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		total++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (total);
}
