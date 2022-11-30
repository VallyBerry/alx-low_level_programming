#include "lists.h"

/**
 * free_listint - frees memory allocated in previous functions.
 * @head: given struct.
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *a;

	while (head != NULL)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
