#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * description - fibonacci
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i = 0, j = 1, k = 2, j_1 = 0, j_2 = 0, k_1 = 0, k_2 = 0;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
	j_1 = j / 1000000000;
	j_2  = j % 1000000000;
	k_1 = k / 1000000000;
	k_2 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k_1 + (k_2 / 1000000000));
		printf("%lu", k_2 % 1000000000);
		k_1 = k_1 + j_1;
		j_1 = k_1 - j_1;
		k_2 = k_2 + j_2;
		j_2 = k_2 - j_2;
	}
	printf("\n");
	return (0);
}