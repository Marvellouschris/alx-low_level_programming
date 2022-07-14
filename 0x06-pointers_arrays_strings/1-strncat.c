#include "main.h"
#include <string.h>

/**
 * _strncat -  a function that concatenates two strings.
 * @src: first parameter.
 * @dest: second parameter.
 * @n: third parameter.
 * Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
