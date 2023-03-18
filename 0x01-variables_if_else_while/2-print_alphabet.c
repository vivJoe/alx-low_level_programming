#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in
 *  lowercase, and then in uppercase, followed by a new line.
 * Return: 0 (success)
 */

int main(void)
{
	char n = 97;

		while (n <= 122)
		{
			putchar(n);
			n++;
		}
		{
			putchar("\n");
		}
		return (0);
}

