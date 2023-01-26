#include "lists.h"
#include <string.h>

/**
 * str_len - get length of a string
 * @str: string
 *
 * Return: length of the string
 */

unsigned int str_len(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of list
 * @str: new string
 * Return: the address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = str_len(str);
	temp->next = head[0];
	head[0] = temp;
	return (head[0]);
}
