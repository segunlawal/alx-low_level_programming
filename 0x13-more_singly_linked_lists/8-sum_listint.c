#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of list
 * Return: sum of all the data (n) of a listint_t linked list or NULL
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int i, sum;

	temp = head;
	if (temp == NULL)
		return (0);
	for (i = 0; temp->next != NULL; i++)
		sum += temp->n;
	return (sum);
}
