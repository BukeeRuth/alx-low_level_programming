#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node
 * @head: Pointer to a pointer to the head of the doubly-linked list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = prev;

	free(temp);

	return (1);
}

