#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *V = haystack;
		char *R = needle;

		while (*V == *R && *R != '\0')
		{
			V++;
			R++;
		}

		if (*R == '\0')
			return (haystack);
	}

	return (0);
}
