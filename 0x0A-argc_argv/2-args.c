#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
