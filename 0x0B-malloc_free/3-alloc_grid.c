#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **meet;

	int x, y;

	if (width <= 0 || height <= 0)

		return (NULL);

	meet = malloc(sizeof(int *) * height);

	if (meet == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		meet[x] = malloc(sizeof(int) * width);


		if (meet[x] == NULL)

		{
			for (; x >= 0; x--)
				free(meet[x]);
			free(meet);

			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			meet[x][y] = 0;
	}
	return (meet);
}
