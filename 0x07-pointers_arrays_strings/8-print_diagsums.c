#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: as first parameter
 * @size: second parameter
*/

void print_diagsums(int *a, int size)
{
	int b;
	unsigned int add = 0, add1 = 0;
	for (b = 0; b < size; ++b)
	{
		add += a[(size * b) + b];
		add1 += a[(size * (b + 1)) - (b + 1)];
	}
	printf("%d, %d\n", add, add1);
}
