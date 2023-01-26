#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a linked list
 * @h: pointer
 * Return: size_t number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		char *format = "[%u] %s\n";

		if (!h->str)
			printf(format, 0, "(nil)");
		else
			printf(format, h->len, h->str);
		num++;
		h = h->next;
	}
	return (num);
}
