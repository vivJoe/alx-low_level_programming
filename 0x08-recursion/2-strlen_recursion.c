#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string printed
 *
 * Return: returns 0
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}

	return (lenght);
}
