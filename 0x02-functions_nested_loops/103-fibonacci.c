#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * description - franbscci
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	unsigned long int j = 1, k = 2, next = 0, sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);
	return (0);
}