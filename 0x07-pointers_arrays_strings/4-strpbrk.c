#include "main.h"
/**
* _strpbrk - A function that searches a string for any of a set of bytes
* @s: string
* @accept: holds a string
* Return: pointer to the byte s in accept or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int v;

	while (*s)
	{
		for (v = 0; accept[v]; v++)
		{
			if (*s == accept[v])
				return (s);
		}
		s++;
	}
	return ('\0');
}
