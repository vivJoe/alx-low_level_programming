
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head node of the list.
 * @index: The index of the node, starting at 0.
 *
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}

	return (current);
}

