#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int v, n, r = 0, l = 0;

	char *str;

	if (ac == 0 || av == NULL)

		return (NULL);

	for (v = 0; v < ac; v++)
	{
		for (n = 0; av[v][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);
	for (v = 0; v < ac; v++)
	{
	for (n = 0; av[v][n]; n++)
	{
		str[r] = av[v][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
