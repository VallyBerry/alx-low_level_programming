#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - finds the nth node of a list.
 * @head: given list.
 * @index: index of the node.
 * Return: the node at the given index of the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *a;
	unsigned int i;

	if !(head)
	{
		return (NULL);
	}

	if (index == 0)
	{
		return (head);
	}

	i = 1;
	while (i <= index)
	{
		a = head->next;
		i++;
		if (a == NULL)
		{
			return (NULL);
		}
	}
	return (a);
}
