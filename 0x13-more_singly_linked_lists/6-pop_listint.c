#include "lists.h"

/**
 * pop_listint - removes the head of node of  listint_t list.
 * @head: points to the location  of 
 *        head of listint_t list.
 * data: return type  
 * Return: for the linked list if empty return - 0.
 *         else - head node is (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == 0)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (data);
}
