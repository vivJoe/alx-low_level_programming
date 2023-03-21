#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet,
 *  in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i, j;

	for (i = 0; i < 10; i++)

	{
		for (j = 0; j < 26; j++)

		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
	}
}
