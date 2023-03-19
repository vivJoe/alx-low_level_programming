#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    /* Print the numbers of base 16 in lowercase */
    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }

    for (i = 'a'; i <= 'f'; i++)
    {
        putchar(i);
    }

    putchar('\n');

    return (0);
}

