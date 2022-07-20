#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (n), 0 - if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
		return (0);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
