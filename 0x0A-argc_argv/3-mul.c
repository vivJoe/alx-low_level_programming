#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: if the program does not receive two arguments,
 * your program should print Error,
 * followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
