<<<<<<< HEAD
#include "main.h"
/**
 * print_times_table - prints the times table
 *  @n: integer for which the times table will be printed
 *  Return: void
*/
void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;

				if (column == 0)
                {
					_putchar('0');
				}
					_putchar('0');}

				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0'); }
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0'); }
				else if (product > 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0'); } 
			}
			_putchar('\n');
		}
	} 
}
=======
					_putchar(product % 10 + '0'); } }
			_putchar('\n'); } } }

>>>>>>> 1b0531b2a06c9c6b10525bbbd9e5635eba87264f
=======
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
>>>>>>> 082d482196b7f3813f42db5d81c767979b74d4db
