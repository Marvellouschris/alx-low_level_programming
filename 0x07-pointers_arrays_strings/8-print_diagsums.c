#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals
 * Description -  a function that prints the sum of diagonals of integers
 * @a: array
 * @size: size of matrix
 * Return: void, 0
*/
void print_diagsums(int *a, int size)
{
	int b, c;
	int diagsum1 = 0, diagsum2 = 0;
	for (b = 0; b <= (size - 1); b++)
	{
		diagsum1 = diagsum1 + *(a + ((size + 1) * b));
	}
	for (c = 1; c <= size; c++)
	{
		diagsum2 = diagsum2 + *(a + ((size - 1) * c));
	}
	printf("%i, %i\n", diagsum1, diagsum2);
}
