#include "main.h"
#include <string.h>

/**
 * print_chessboard - a function that prints the chessboard.
 * @a:as parameter
*/

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
