#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print a buffer
 * Description - a function that prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 * Return: void
*/

void print_buffer(char *b, int size)
{
	int c, d;
	int e = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (e < size)
	{
		c = size - e < 10 ? size - e : 10;
		printf("%08x: ", e);
		for (d = 0; d < 10; d++)
		{
			if (d < c)
				printf("%02x", *(b + e + d));
			else
				printf("  ");
			if (d % 2)
			{
				printf(" ");
			}
		}
		for (d = 0; d < c; d++)
		{
			int f = *(b + e + d);

			if (f < 32 || f > 132)
			{
				f = '.';
			}
			printf("%c", f);
		}
		printf("\n");
		e += 10;
	}
}
