#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: If no number is passed to the program,
 * print 0, followed by a new line
 * one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int r;
	int number;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (r = 1; r < argc; r++)
	{
		char *arg = argv[r];
		int j;

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		 number = atoi(arg);
		if (number < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += number;
	}
	printf("%d\n", sum);
	return (0);
}


