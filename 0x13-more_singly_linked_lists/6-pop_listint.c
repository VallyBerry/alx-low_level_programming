#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a list.
 * @head: given list.
 * Return: data of the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int b;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	a = *head;
	*head = a->next;
	b = a->n;
	free(a);
	return (b);

}
