#include "lists.h"

/**
 * listint_len - prints all the elements of a list
 * @h: header node
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}

	return (count);
}
