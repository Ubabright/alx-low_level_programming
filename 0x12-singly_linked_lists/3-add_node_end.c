#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
 list_t *non;
 list_t *ptr = *head;
 unsigned int len = 0;

 while (str[len])
 len++;

 non = malloc(sizeof(list_t));
 if (!non)
 return (NULL);

 non->str = strdup(str);
 non->len = len;
 non->next = NULL;

 if (*head == NULL)
 {
 *head = non;
 return (non);
 }

 while (ptr->next)
 ptr = ptr->next;

 ptr->next = non;

 return (non);
}

