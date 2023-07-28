#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - displays  elements of a list
  * @h: one  linked list
  *
  * Return: No. of nodes
  */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL) 
	return (0);

	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", h->len, "(nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
        printf("[%d] %s\n", h->len, "(nil)");
	return (i);
}
