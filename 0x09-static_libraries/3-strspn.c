#include "main.h"
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: This is the C string to be scanned
 * @accept: This is the character to be searched in str.
 * Return: This function returns the number of characters
*/

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
