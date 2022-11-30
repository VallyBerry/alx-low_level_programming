#include "lists.h"

/**
 * sum_listint - sums up all the data in a given list.
 * @head: given list.
 * Return: the sum of all data in the list.
 */
int sum_listint(listint_t *head)
{
	listint_t *a;
	int sum;
	unsigned int i;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	a = head;

	i = 0;
	while (a != NULL)
	{
		sum += a->n;
		a = a->next;
		i++;
	}
	return (sum);
}
