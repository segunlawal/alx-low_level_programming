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
 * add_node_end - adds a new node at the end of a list
 * @head: head of list
 * @str: new string
 * Return: the address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;

	temp = head[0];
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = str_len(str);
	new->next = NULL;
	if (head[0] == NULL)
	{
		head[0] = new;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

        return (head[0]);
}

