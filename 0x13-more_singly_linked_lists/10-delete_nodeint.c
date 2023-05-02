#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 *index index of a listint_t linked list.
 * @head: double pointer to the head of the list.
 * @index: index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);

		return (1);
	}

	prev = NULL;
	current = *head;

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);

		prev = current;
		current = current->next;
	}

	if (current == NULL)

		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}

