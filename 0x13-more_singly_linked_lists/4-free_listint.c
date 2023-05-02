
#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head node of the list.
 **/
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

