#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Print single digit numbers of base 10 */
	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}

	putchar('\n');

	return (0);
}

