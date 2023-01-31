#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: head of list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (temp != NULL)
	{
		temp = head;
		free(temp);
		temp = temp->next;
	}
}
