
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node with a given
 * value at a specified position in a listint_t linked list.
 * @head: A pointer to a pointer to the head node of the list.
 * @idx: The index where the new node should be inserted, starting at 0.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL
 * if the operation failed.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

