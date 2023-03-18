#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in
 *  lowercase, and then in uppercase, followed by a new line.
 * Return: 0 (success)
 */

int main(void)
{
	int n = 'a';

		while (n <= 'z')
		{
			putchar(n);
			n++;
		}
		{
			putchar("\n")
		}
		return (0);
}

