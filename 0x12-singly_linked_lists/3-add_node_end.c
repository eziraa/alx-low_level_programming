#include "lists.h"
#include <stdlib.h> /* malloc */
#include <string.h> /* strdup */


/**
 * add_node_end - adds a new node at the end
 * @head: pointer
 * @str: string
 * Return: pointer to new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *last = NULL;
	size_t len = 0;

	while (str && str[len])
		len++;


	new = malloc(sizeof(*new));
	if (new)
	{
		new->str  = strdup(str);
		new->len  = len;
		new->next = NULL;
		if (!*head)
			*head = new;
		else
		{
			last = *head;
			while (last->next)
				last = last->next;
			last->next = new;
		}
	}
	return (new);
}
