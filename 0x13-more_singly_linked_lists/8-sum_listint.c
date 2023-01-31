#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of list
 * Return: sum of all the data (n) of a listint_t linked list or NULL
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	if (temp == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
