#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (num);
}
