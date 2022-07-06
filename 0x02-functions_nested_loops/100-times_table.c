#include "main.h"

/**
 * print_times_table - print the times table
 * Description - a function that prints the n times table
 * @n: The number in the times table
 * Return: number matrix
*/

void print_times_table(int n)
{
	int b, c, d;

	if (n >= 0 && n <= 14)
	{
		for (b = 0; b <= n; b++)
		{
			for (c = 0; c <= n; c++)
			{
				d = b * c;
				if (d > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((d / 100) + '0');
					_putchar(((d / 10) % 10) + '0');
					_putchar((d % 10) + '0');
				}
				else if (d > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((d / 10) % 10) + '0');
					_putchar((d % 10) + '0');
				}
				else
				{
					if (c != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(d + '0');
				}
			}
			_putchar('\n');
		}
	}
}