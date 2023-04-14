#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int r = 0, lenght1 = 0, lenght2 = 0;
	int j = 0;

	while (s1 && s1[lenght1])
		lenght1++;

	while (s2 && s2[lenght2])
		lenght2++;

	if (n < lenght2)
		s = malloc(sizeof(char) * (lenght1 + n + 1));
	else
		s = malloc(sizeof(char) * (lenght1 + lenght2 + 1));

	if (!s)
		return (NULL);

	while (r < lenght1)
	{

		s[r] = s1[r];

		r++;

	}

	while (n < lenght2 && r < (lenght1 + n))

		s[r++] = s2[j++];



	while (n >= lenght2 && r < (lenght1 + lenght2))

		s[r++] = s2[j++];

	s[r] = '\0';
	return (s);
}
