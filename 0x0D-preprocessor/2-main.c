#include <stdio.h>

/**
 * main - Write a program that prints the name of the file
 *
 * Return: return 0
 */

int main(void)
{
	const char *file_name = __FILE__;
	int r = 0;

	while (file_name[r] != '\0')
	{
		putchar(file_name[r]);
		r++;
	}

	putchar('\n');

	return (0);
}
