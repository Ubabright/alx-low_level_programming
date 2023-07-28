#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Views the numbers of elements in a list
  * @h: A linked list
  *
  * Return: No. of elements in a list
  */
size_t list_len(const list_t *h)
{
	size_t total = 0;

	while (h)
	{
		h = h->next;
		total++;
	}

	return (total);
}
