#include "main.h"
#include <string.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: This is the C string to be scanned
 * @c: This is the character to be searched in str.
 * Return: a pointer to the first occurrence of the character c in the string s
*/

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
