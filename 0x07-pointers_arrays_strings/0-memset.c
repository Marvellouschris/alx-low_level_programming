#include "main.h"
#include <string.h>

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer
 * @b: constant bytes
 * @n: bytes
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
