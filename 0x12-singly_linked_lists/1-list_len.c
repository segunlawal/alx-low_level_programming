#include "lists.h"
/**
 * list_lwn - returns the number of elements in a linked list
 * @h: list head
 * Return: the number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}
