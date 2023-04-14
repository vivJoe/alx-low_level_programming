#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointter;

	pointter = malloc(b);

	if (pointter == NULL)
		exit(98);

	return (pointter);
}
