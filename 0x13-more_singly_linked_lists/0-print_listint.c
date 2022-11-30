#include "lists.h"
#include <stdio.h>

/**
 * print_listint- prints out all the elements of a list.
 * @h: given variable.
 * Return: size of elements in the struct.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
