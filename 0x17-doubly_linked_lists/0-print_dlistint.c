#include "lists.h"

/**
 * print_dlistint - program prints all the element of a dlistint_t
 * @h: doubly list to be transversed and printed
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (len);
}
