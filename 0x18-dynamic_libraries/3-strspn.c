#include "main.h"
/**
* _strspn - A function that gets the length of a prefix substring
* @s: string
* @accept: holds the length of a prefix substring
* Return: number of bytes of s from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int v = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				v++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (v);
		}
		s++;
	}
	return (v);
}
