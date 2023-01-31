#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of list
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = *head;
	if (*head == NULL)
		return (0);
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
