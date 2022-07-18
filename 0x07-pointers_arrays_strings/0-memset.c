#include "main.h"

/**
 * _memset - fill the memory
 * Description - a function that fills the memory
 * @s: memory area
 * @b: constant byte value to set
 * @n: bytes of the memory area to fill
 * Return: a pointer to the memory area, s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
