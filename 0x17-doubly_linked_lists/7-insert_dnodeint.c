#include "lists.h"

/**
 * create_dnodeint - Creates a new dlistint_t node with the given data.
 * @n: Value to be assigned to the data of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *create_dnodeint(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
	}

	return (new_node);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
 * @h: Pointer to a pointer to the head of the doubly-linked list.
 * @idx: Index at which the new node should be inserted (starting from 0).
 * @n: Value to be assigned to the data of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;

	if (h == NULL)
		return (NULL);

	new_node = create_dnodeint(n);

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		temp = *h;

		while (temp != NULL && idx > 0)
		{
			temp = temp->next;
			idx--;
		}

		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}

		new_node->prev = temp->prev;
		new_node->next = temp;
		temp->prev->next = new_node;
		temp->prev = new_node;
	}

	return (new_node);
}

