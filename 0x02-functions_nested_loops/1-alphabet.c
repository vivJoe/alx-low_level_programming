#include "main.h"
/**
 * print_alphabet -  prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: void
 */

void print_alphabet(void);
/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

	{

		_putchar(c);

	}
	_putchar('\n');
}
