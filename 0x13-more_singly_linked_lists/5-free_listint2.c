#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees the memory after a function.
 * @head: given list.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}
}
