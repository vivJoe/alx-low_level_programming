#include "main.h"
/**
* print_chessboard - A function that prints chessboard
* @a: array\
* Return: 0
*/
void print_chessboard(char (*a)[8])
{
	int v, r;

	for (v = 0; v < 8; v++)
	{
		for (r = 0; r < 8; r++)
		{
			_putchar(a[v][r]);
		}
		_putchar('\n');
	}
}
