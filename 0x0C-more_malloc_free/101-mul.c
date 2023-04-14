#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _is_digit - Checks if a string consists entirely of decimal digits.
 * @str: The string to check.
 *
 * Return: 1 if the string consists entirely of decimal digits, 0 otherwise.
 */
int _is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 * _mul - Multiplies two numbers.
 * @num1: The first number to multiply.
 * @num2: The second number to multiply.
 *
 * Return: A pointer to the result of the multiplication.
 */
char *_mul(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len = len1 + len2;
	int i, j;
	int carry, res;
	char *result;

	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		result[i] = '0';
	result[len] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			res = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
			carry = res / 10;
			result[i + j + 1] = (res % 10) + '0';
		}
		result[i + j + 1] = carry + '0';
	}

	while (*result == '0' && *(result + 1) != '\0')
		result++;

	return (result);
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments (must be 3).
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 if the multiplication was successful, or 98 otherwise.
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!_is_digit(num1) || !_is_digit(num2))
	{
		printf("Error\n");
		return (98);
	}

	result = _mul(num1, num2);
	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);

	free(result);

	return (0);
}

