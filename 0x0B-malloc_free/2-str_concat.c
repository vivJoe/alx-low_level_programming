#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{

	char *conct;

	int i, city;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

		i = city = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[ci] != '\0')
		city++;

	conct = malloc(sizeof(char) * (i + city + 1));

	if (conct == NULL)

		return (NULL);

	i = city = 0;

	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[city] != '\0')
	{
		conct[i] = s2[city];
		i++, city++;
	}
	conct[i] = '\0';
	return (conct);
}
