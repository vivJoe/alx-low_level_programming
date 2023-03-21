#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @int: The int to get last digit of
 *
 * Return: value of the last digit
 */

int print_last_digit(int)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;

		_putchar(last_digit + '0');
		return (last_digit);
	}
}
