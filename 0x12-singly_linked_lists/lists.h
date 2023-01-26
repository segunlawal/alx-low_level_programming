#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_a - singly linked list
 * @str: string
 * @len: length of the string
 * @next: next node
 */
typedef struct list_a
{
	char *str;
	unsigned int len;
	struct list_a *next;
} list_t;

size_t print_list(const list_t *h);

#endif/*_LISTS_H_*/
