#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: argument to count
 * @argv[]: an array of argument
 * @argv: an array of argument
 *
 * Return: return 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
