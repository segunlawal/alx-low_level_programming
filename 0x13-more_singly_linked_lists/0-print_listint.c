#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: header node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *temp;
	
	temp = h;
	for (count = 0; temp != NULL; count++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (count);
}
