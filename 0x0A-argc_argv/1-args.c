#include <stdio.h>

/**
 * main - a program that prints the numbe
 * r of arguments passed into it
 * @argc: count of argument
 * @argv: array of argument
 *
 * Return: return (0)
 */

int main(int argc, char *argv[])
{
(void)argv; /*ignore argc*/
	printf("%d\n", argc - 1);

	return (0);
}
