#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@z: int data type
 * Return: integer
 */
int print_last_digit(int z)
{
	int last = z % 10;

	if (z < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}