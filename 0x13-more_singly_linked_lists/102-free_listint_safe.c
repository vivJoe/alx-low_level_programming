#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: Pointer to pointer to head node
 *
 * Return: Size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		if ((void *)current <= (void *)next)
		{
			*h = NULL;
			return (count);
		}
		current = next;
	}
	*h = NULL;
	return (count);
}

