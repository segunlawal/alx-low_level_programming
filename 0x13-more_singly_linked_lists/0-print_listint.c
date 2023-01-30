#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: header node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	for (count = 0; h->next != NULL; count++)
	{
		printf("%d", h->n);
		h = h->next;
	}

	return (count);
}
