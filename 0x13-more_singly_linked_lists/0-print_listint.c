#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head of const listint_t
 * Return: the number of nodes in h
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
