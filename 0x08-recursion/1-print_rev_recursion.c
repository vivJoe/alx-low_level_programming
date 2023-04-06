#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion -  a function that prints a string in reverse
 * @s: a string that is being printed
 *
 * Return: return 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
