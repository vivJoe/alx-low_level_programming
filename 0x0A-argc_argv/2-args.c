#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	for (int r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}

	return (0);
}
