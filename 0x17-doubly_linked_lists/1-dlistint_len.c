#include "lists.h"

/**
 * dlistint_len - program returns the number of elements
 * in a linked doubly linked list
 * @h: doubly linked list to work with
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len)
}
