#include <stdio.h>
/**
 *main - prints the first 50 Fibonacci numbers, starting with 1 and
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i = 0, j = 1, k = 2, next = 0;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}