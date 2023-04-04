#include "main.h"
#include <stdio.h>

/**
* print_diagsums - A function that prints the sum of
* the two diagonals of a square matrix
* @a: array pointer
* @size: size of the matrix
* Return: sum
*/
void print_diagsums(int *a, int size)
{
	int v;
	int sum1 = 0, sum2 = 0;

	for (v = 0; v < size; v++)
	{
		sum1 += a[v];
		a += size;
	}
	a -= size;
	for (v = 0; v < size; v++)
	{
		sum2 += a[v];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
