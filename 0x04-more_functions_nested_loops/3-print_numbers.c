#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return - void
 */
void print_numbers(void)
{
	int sh;

	for (sh = 48; sh < 58; sh++)
	{
		_putchar(sh);
	}
	_putchar('\n');
}
