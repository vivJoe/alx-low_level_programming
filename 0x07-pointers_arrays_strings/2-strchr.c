#include "main.h"
/**
* _strchr - A function that locates a character in a string
* @s: string
* @c: character
* Return: a pointer to c in s or NULL
*/
char *_strchr(char *s, char c)
{
	int v = 0;

	for (; s[v] >= '\0'; v++)
	{
		if (s[v] == c)
			return (&s[v]);
	}
	return (0);
}
